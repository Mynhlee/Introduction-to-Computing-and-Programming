#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

void LowerString(char s[]){
    int len = strlen(s);
    for(int i=0; i<len; i++) s[i] = tolower(s[i]);
}

int main(){
    char s[1000];
    fgets(s, 1000, stdin);

    s[strlen(s) - 1] = '\0';
    LowerString(s);

    char t[1000];
    strcpy(t, s);

    char str[100][100];
    int n = 0;

    char *token = strtok(s, " ");
    while(token != NULL){
        strcpy(str[n++], token);
        token = strtok(NULL, " ");
    }

    qsort(str, n, sizeof(str[0]), compare);

    int sta[n];
    memset(sta, 0, sizeof(sta));

    for(int i=0; i<n; i++){
        if(sta[i] != -1){
            for(int j=i; j<n; j++){
                if(strcmp(str[i], str[j]) == 0){
                    sta[i]++;
                    if(i != j) sta[j] = -1;
                }
                else break;
            }
        }
    }

    token = strtok(t, " ");
    while(token != NULL){
        for(int i=0; i<n; i++){
            if(sta[i] != -1 && strcmp(token, str[i]) == 0){
                printf("%s %d\n", token, sta[i]);
                sta[i] = -1;
            }
        }
        token = strtok(NULL, " ");
    }
}