#include <stdio.h>
#include <string.h>

int main(){
    char data[1000][50]; int size = 0;
    int maxlen = 0;

    char s[50];
    while(scanf("%s", s) != -1){
        strcpy(data[size++], s);
        maxlen = (strlen(s) > maxlen) ? strlen(s) : maxlen;
    }

    for(int i=0; i<size; i++){
        if(strlen(data[i]) == maxlen){
            int count = 1;

            for(int j=i+1; j<size; j++){
                if(strcmp(data[i], data[j]) == 0){
                    count++;
                    strcpy(data[j], "");
                }
            }

            printf("%s %d %d\n", data[i], maxlen, count);
        }
    }
}