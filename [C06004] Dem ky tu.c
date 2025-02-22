#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    gets(s);

    int alpha = 0;
    int digit = 0;
    int other = 0;

    for(int i=0; i<strlen(s); i++){
        if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z')) alpha++;
        else if('0'<=s[i] && s[i]<='9') digit++;
        else other++;
    }

    printf("%d %d %d", alpha, digit, other);
}