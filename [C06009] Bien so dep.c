#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool analysis(char s[]){
    bool case1 = true;
    for(int i=2; i<=5; i++){
        if(s[i-1] >= s[i]){
            case1 = false;
            break;
        }
    }
    if(case1) return true;

    bool case2 = true;
    for(int i=2; i<=5; i++){
        if(s[i-1] != s[i]){
            case2 = false;
            break;
        }
    }
    if(case2) return true;

    if(s[1]==s[2] && s[2]==s[3] && s[4]==s[5]) return true;

    bool case4 = true;
    for(int i=1; i<=5; i++){
        if(s[i] != '6' && s[i] != '8'){
            case4 = false;
            break;
        }
    }
    if(case4) return true;
    return false;
}

void function(){
    scanf("\n");

    char s[20];
    fgets(s, 20, stdin);

    int len = strlen(s);
    s[len - 1] = '\0';
    char str[] = {'#', s[6], s[7], s[8], s[10], s[11], '\0'};

    if(analysis(str)) printf("YES");
    else printf("NO");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}