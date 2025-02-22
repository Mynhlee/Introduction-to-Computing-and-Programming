#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool compare(char s[], char t[]){
    char st[22], ts[22];

    strcpy(st, s); strcat(st, t);
    strcpy(ts, t); strcat(ts, s);

    if(strcmp(st, ts) > 0) return true;
    return false;
}

void swap(char s[], char t[]){
    char tmp[11];
    strcpy(tmp, s);
    strcpy(s, t);
    strcpy(t, tmp);
}

void function(){
    int n;
    scanf("%d", &n);

    char word[n][11];
    for(int i=0; i<n; i++) scanf("%s", word[i]);
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(compare(word[i], word[j])) swap(word[i], word[j]);
        }
    }

    for(int i=0; i<n; i++) printf("%s", word[i]);
}

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        function();
        printf("\n");
    }
}