#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lowerString(char s[]){
    for(int i=0; i<strlen(s); i++) s[i] = tolower(s[i]);
}

int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);

    char result[50] = "";
    char lastname[50] = "";
    int len = 0;

    char *token = strtok(s, " ");
    while(token != NULL){
        result[len++] = tolower(token[0]);
        strcpy(lastname, token);
        lowerString(lastname);

        token = strtok(NULL, " ");
    }

    result[len - 1] = '\0';
    lastname[strlen(lastname) - 1] = '\0';

    printf("%s%s@ptit.edu.vn", result, lastname);
}