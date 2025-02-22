#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stop(){
    char x = getchar();
    if(x == '.') exit(0);
}

void merge(char s[], char s1[], char s2[], int len){
    int k = 0;
    for(int i=0; i<len; i++){
        s[k++] = s2[i];
        s[k++] = s1[i];
    }
    s[k] = '\0';
}

void split(char s[], char s1[], char s2[], int len){
    int k = 0;
    for(int i=0; i<len; i++) s1[i] = s[k++];
    for(int i=0; i<len; i++) s2[i] = s[k++];
    
    s1[len] = '\0'; s2[len] = '\0';
}

void function(int n){
    char raw1[200], raw2[200], raw[200];
    scanf("%s %s %s", raw1, raw2, raw);

    char s1[200], s2[200], s[200];
    strcpy(s1, raw1);
    strcpy(s2, raw2);

    int count = 0;
    while(1){
        char s[n+n];
        count++;
        merge(s, s1, s2, n);

        if(strcmp(raw, s) == 0){
            printf("%d", count);
            return;
        }
        
        split(s, s1, s2, n);
        if(strcmp(s1, raw1) == 0 && strcmp(s2, raw2) == 0){
            printf("-1");
            return;
        }
    }
}

int main(){
    while(1){
        int n;
        scanf("%d", &n);

        if(n == 0) return 0;
        else{
            function(n);
            printf("\n");
        }
    }
}