#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Lower(char s[]){
    for(int i=0; i<strlen(s); i++) s[i] = tolower(s[i]);
}

void import(char s[], int sizeS, char t[], int sizeT){
    fgets(s, sizeS, stdin);
    s[strlen(s) - 1] = '\0';

    scanf("\n");
    fgets(t, sizeT, stdin);
    t[strlen(t) - 1] = '\0';
}

void compare(char raw[], char s[], char result[]){
    char *token = strtok(s, " ");
    while(token != NULL){
        char lowtok[200];
        strcpy(lowtok, token);
        Lower(lowtok);

        if(strcmp(lowtok, raw) != 0){
            strcat(result, token);
            strcat(result, " ");
        }
        token = strtok(NULL, " ");
    }
}

void function(){
    char s[200], t[20];
    import(s, sizeof(s), t, sizeof(t));

    char *token = strtok(t, " ");
    while(token != NULL){
        char lowtok[200];
        strcpy(lowtok, token);
        Lower(lowtok);

        char result[200] = "";
        compare(lowtok, s, result);

        strcpy(s, result);
        token = strtok(NULL, " ");
    }
    printf("%s", s);
}

int main(){
    int t;
    scanf("%d\n", &t);

    for(int i=1; i<=t; i++){
        printf("Test %d: ", i);
        function();
        printf("\n");
    }
}