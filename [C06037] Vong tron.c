#include <stdio.h>
#include <string.h>

int main(){
    char s[52];
    scanf("%s", s);

    int fir[26], sec[26];
    for(int i=0; i<26; i++) fir[i] = -1;

    for(int i=0; i<52; i++){
        int pos = s[i] - 'A';

        if(fir[pos] == -1) fir[pos] = i;
        else sec[pos] = i;
    }

    int count = 0;
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            if(fir[i] < fir[j] && fir[j] < sec[i] && sec[i] < sec[j]) count++;
        }
    }
    printf("%d", count);
}