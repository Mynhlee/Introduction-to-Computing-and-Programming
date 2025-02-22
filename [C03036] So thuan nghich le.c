#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

ThuanNghich(char s[]){
    int len = strlen(s) - 1;
    for(int i=0; i<=len/2; i++){
        if(s[i] != s[len - i]) return false;
    }
    return true;
}

CheckDigits(char s[]){
    int sum = 0;
    for(int i=0; i<strlen(s); i++){
        if((s[i] - '0') % 2 == 0) return false;
        sum += s[i] - '0';
    }

    if(sum % 2 == 0) return false;
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);
        if(ThuanNghich(s) && CheckDigits(s)) printf("YES\n");
        else printf("NO\n");
    }
}