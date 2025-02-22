#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void function(){
    char s[1000];
    scanf("%s", s);

    bool sta[10];
    for(int i=0; i<=9; i++) sta[i] = false;

    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[0] == '0' || isdigit(s[i]) == false){
            printf("INVALID");
            return;
        }
        else sta[s[i] - '0'] = true;
    }

    for(int i=0; i<=9; i++){
        if(!sta[i]){
            printf("NO");
            return;
        }
    }
    printf("YES");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}