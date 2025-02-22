#include <stdio.h>
#include <string.h>
#include <ctype.h>

void format(char s[]){    
    int len = strlen(s);
    for(int i=0; i<len; i++) s[i] = tolower(s[i]);
    s[0] = toupper(s[0]);
}

void formatUpper(char s[]){
    int len = strlen(s);
    for(int i=0; i<len; i++) s[i] = toupper(s[i]);
}

void function(){
    scanf("\n");

    char s[80];
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';

    char firstname[80] = "blank";
    char final[80] = "";
    char *token = strtok(s, " ");
    
    while(token != NULL){
        if(strcmp("blank", firstname) == 0){
            strcpy(firstname, token);
            formatUpper(firstname);
        }
        else{
            format(token);
            strcat(final, token);
            strcat(final, " ");
        }
        token = strtok(NULL, " ");
    }
    final[strlen(final) - 1] = ',';
    printf("%s %s",final, firstname);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}