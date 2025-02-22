#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void function(){
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) scanf("%d", &mat[i][j]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int ii=i; ii<n; ii++){
                for(int jj=j; jj<m; jj++){
                    if(mat[i][j] > mat[ii][jj]) swap(&mat[i][j], &mat[ii][jj]);
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        function();
    }
}