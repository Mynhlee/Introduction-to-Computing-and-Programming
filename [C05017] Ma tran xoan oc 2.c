#include <stdio.h>
#include <stdlib.h>

void function(){
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n + 2][m + 2];
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=m+1; j++){
            if(i==0 || j==0 || i==n+1 || j==m+1) mat[i][j] = -1;
            else scanf("%d", &mat[i][j]);
        }
    }

    int dir = 0, i = 1, j = 1;
    int res[n*m], index = 0;
    
    res[index++] = mat[1][1];
    mat[1][1] = -1;

    while(index < n*m){
        switch (dir % 4){
        case 0:
            if(mat[i][j+1] != -1){
                res[index++] = mat[i][j+1];
                mat[i][++j] = -1;
            }
            else dir++;
            break;
        case 1:
            if(mat[i+1][j] != -1){
                res[index++] = mat[i+1][j];
                mat[++i][j] = -1;
            }
            else dir++;
            break;
        case 2:
            if(mat[i][j-1] != -1){
                res[index++] = mat[i][j-1];
                mat[i][--j] = -1;
            }
            else dir++;
            break;
        case 3:
            if(mat[i-1][j] != -1){
                res[index++] = mat[i-1][j];
                mat[--i][j] = -1;
            }
            else dir++;
            break;
        }
    }

    for(int i=0; i<index; i++) printf("%d ", res[i]);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}