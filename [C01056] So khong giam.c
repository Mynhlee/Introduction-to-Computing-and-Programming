#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);

        int flag = true;

        for(int i=1; i<strlen(s); i++){
            if(s[i] < s[i-1]) flag = false;
        }
        
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}