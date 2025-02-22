#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

palin(char s[]){
    int len = strlen(s) - 1;
    for(int i=0; i<=len/2; i++){
        if(s[i] != s[len - i]) return false;
    }
    return true;
}

beauty(char s[]){
    int len = strlen(s);
    int first = s[0] - '0';
    int last = s[len - 1] - '0';

    if(first != 2*last && last != 2*first) return false;

    memmove(s, s+1, strlen(s));
    s[strlen(s) - 1] = '\0';

    if(!palin(s)) return false;

    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);
        
        if(beauty(s)) printf("YES\n");
        else printf("NO\n");
    }
}