#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(){
    int m;
    scanf("%d", &m);

    int mat[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++) scanf("%d", &mat[i][j]);
    }

    for(int i=0; i<m; i++) swap(&mat[i][i], &mat[i][m-i-1]);

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}