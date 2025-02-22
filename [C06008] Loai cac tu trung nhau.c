#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[100];
    gets(s);

    char arr[50][50];
    char *token = strtok(s, " ");

    int n = 0;
    while(token != NULL){
        strcpy(arr[n++], token);
        token = strtok(NULL, " ");
    }

    int *analyst = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        if(analyst[i] == 0) printf("%s ", arr[i]);

        for(int j=i+1; j<n; j++){
            if(strcmp(arr[i], arr[j]) == 0) analyst[j] = 1;
        }
    }
}