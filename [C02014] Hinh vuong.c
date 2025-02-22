#include <stdio.h>
#include <string.h>

void change(char s[], int index){
    int start = index;
    int end = strlen(s) - index - 1;

    for(int i=start; i<=end; i++) s[i]--;
}

void change_rev(char s[], int index, int n){
    int start = index;
    int end = strlen(s) - index - 1;

    for(int i=start; i<=end; i++) s[i] = n + '0';
}

int main(){
    int n;
    scanf("%d", &n);

    char s[n*2-1];
    for(int i=0; i<n*2-1; i++) s[i] = n + '0';
    s[n*2-1] = '\0';

    printf("%s\n", s);
    for(int i=1; i<n; i++){
        change(s, i);
        printf("%s\n", s);
    }

    int index = strlen(s) / 2;
    for(int i=2; i<=n; i++){
        change_rev(s, index--, i);
        printf("%s\n", s);
    }
}