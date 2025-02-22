#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char s1[100], s2[100];
char a1[100][100], a2[100][100];
int k1, k2;

void import(){
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    scanf("\n");
    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';
}

void AddtoArray(char s[], char array[][100], int *size){
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

void format(char array[][100], int *size){
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

int main(){
    import();

    AddtoArray(s1, a1, &k1);
    format(a1, &k1);

    AddtoArray(s2, a2, &k2);
    format(a2, &k2);

    for(int i=0; i<k2; i++){
        for(int j=0; j<k1; j++){
            int value = strcmp(a2[i], a1[j]);

            if(value == 0){
                strcpy(a1[j], "");
                break;
            }
            else if(value < 0) break;
        }
    }

    for(int i=0; i<k1; i++){
        if(strcmp(a1[i], "") != 0) printf("%s ", a1[i]);
    }
}