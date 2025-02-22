#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindromic(char s[]){
    int len = strlen(s);
    for(int i=0; i<len/2; i++){
        if(s[i] != s[len-i-1]) return false;
    }
    return true;
}

int main(){
    char s[1111];
    char array[1111][1111];
    int sta[1111] = {0};
    int size = 0;
    int max = 0;

    while(scanf("%s", s) != -1){
        if(palindromic(s)){
            max = (max < strlen(s)) ? strlen(s) : max;

            int pos = -1;
            for(int i=0; i<size; i++){
                if(strcmp(s, array[i]) == 0){
                    pos = i;
                    break;
                }
            }

            if(pos == -1){
                strcpy(array[size], s);
                sta[size++] = 1;
            }
            else sta[pos]++;
        }
    }

    for(int i=0; i<size; i++){
        if(strlen(array[i]) == max) printf("%s %d\n", array[i], sta[i]);
    }
}