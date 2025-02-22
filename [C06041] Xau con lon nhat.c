#include <stdio.h>
#include <string.h>
#define MAX 100001

int main(){
    char s[MAX];
    scanf("%s", s);

    int stat[26] = {0};
    int len = strlen(s);
    for(int i=0; i<len; i++) stat[s[i] - 'a']++;

    int pos = 0;
    for(int i=25; i>=0; i--){
        char chr = i + 'a';
        
        for(int j=pos; j<len; j++){
            if(stat[i] == 0) break;

            if(chr == s[j]){
                printf("%c", chr);
                stat[i]--;
                pos = j;
            }
        }        
    }
}