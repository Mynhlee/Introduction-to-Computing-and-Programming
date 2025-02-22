#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int check(char s[]){
    for(int i=0; i<strlen(s); i++){
        if((s[i] - '0') % 2 != 0) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);
        
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
}