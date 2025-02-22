#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

beauty(char s[]){
    int len = strlen(s);
    for(int i=0; i<(len-1)/2; i++){
        if(s[i] != s[len - i - 1]) return false;
        if((s[i] - '0') % 2 != 0) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[500];
        scanf("%s", s);
        
        if(beauty(s)) printf("YES\n");
        else printf("NO\n");
    }
}