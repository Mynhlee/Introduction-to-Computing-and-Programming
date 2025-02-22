#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void import(char s[], int sizeS, char t[], int sizeT){
    fgets(s, sizeS, stdin);
    s[strlen(s) - 1] = '\0';

    fgets(t, sizeT, stdin);
    t[strlen(t) - 1] = '\0';
}

void AddtoArray(char s[], char array[][200], int *size){
    char *token = strtok(s, " ");
    *size = 0;

    while(token != NULL){
        strcpy(array[(*size)++], token);
        token = strtok(NULL, " ");
    }
}

int compare(const void *a, const void *b){
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

void format(char array[][200], int *size){
    qsort(array, (*size), sizeof(array[0]), compare);

    for(int i=1; i<(*size); i++){
        if(strcmp(array[i], array[i-1]) == 0){
            char flag[100];
            strcpy(flag, array[i-1]);

            int index = i;
            while(strcmp(array[index], flag) == 0) strcpy(array[index++], "");
        }
    }

    qsort(array, (*size), sizeof(array[0]), compare);

    int flag = 0;
    for(int i=0; i<(*size); i++){
        if(strcmp(array[i], "") != 0){
            flag = i;
            break;
        }
    }

    for(int i=0; i<(*size)-flag; i++) strcpy(array[i], array[i+flag]);
    (*size) -= flag;
}

void function(){
    char s[200], t[200];
    char a[200][200], b[200][200];
    int m, n;

    import(s, sizeof(s), t, sizeof(t));

    AddtoArray(s, a, &m);
    format(a, &m);

    AddtoArray(t, b, &n);
    format(b, &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int value = strcmp(b[i], a[j]);

            if(value == 0){
                strcpy(a[j], "");
                break;
            }
            else if(value < 0) break;
        }
    }

    for(int i=0; i<m; i++){
        if(strcmp(a[i], "") != 0) printf("%s ", a[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){
        function();
        printf("\n");
    }
}