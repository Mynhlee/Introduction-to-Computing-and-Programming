#include <stdio.h>
#include <string.h>

int main(){
    char s[11], u[11];
    scanf("%s", s);

    int k = 0;
    u[k++] = s[strlen(s) - 1];
    for(int i=1; i<strlen(s)-1; i++) u[k++] = s[i];
    
    u[k++] = s[0];
    u[k] = '\0';

    if(u[0] == '0'){
        char uu[11];
        k = 0;
        for(int i=1; i<strlen(s); i++) uu[k++] = u[i];
        
        uu[k] = '\0';
        strcpy(u, uu);
    }
    printf("%s", u);
}