#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int mat[n+2][n+2];
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if(i==0 || j==0 || i>n || j>n) mat[i][j] = -1;
            else mat[i][j] = 0;
        }
    }

    mat[1][1] = 1;
    int num = 2;
    int dir = 1;
    int i = 1, j = 1;

    while(num < n*n + 1){
        switch (dir % 4){
        case 1:
            if(mat[i][j+1] == 0) mat[i][++j] = num++;
            else dir++;
            break;
        case 2:
            if(mat[i+1][j] == 0) mat[++i][j] = num++;
            else dir++;
            break;
        case 3:
            if(mat[i][j-1] == 0) mat[i][--j] = num++;
            else dir++;
            break;
        case 0:
            if(mat[i-1][j] == 0) mat[--i][j] = num++;
            else dir++;
            break;
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}