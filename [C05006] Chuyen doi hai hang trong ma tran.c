#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) scanf("%d", &mat[i][j]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    for(int i=0; i<m; i++) swap(&mat[a-1][i], &mat[b-1][i]);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}