#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    scanf("%s", s);

    int len = strlen(s);
    int count[len];
    int max = 0;

    for(int i=0; i<len; i++){
        count[i] = 1;

        for(int j=0; j<i; j++){
            if(s[j] < s[i]) count[i] = (count[j] + 1 > count[i]) ? count[j] + 1 : count[i];
        }
        max = (count[i] > max) ? count[i] : max;
    }

    printf("%d", 26 - max);
}