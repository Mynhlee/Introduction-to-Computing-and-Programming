#include <stdio.h>

int Fib[100];
void CreateFib(int lim){
    Fib[0] = 0;
    Fib[1] = 1;
    for(int i=2; i<=lim; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int main(){
    int n;
    scanf("%d", &n);

    CreateFib(n*n);
    int block = Fib[n*n];
    int mat[n+2][n+2];

    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if(i==0 || j==0 || i>n || j>n) mat[i][j] = -2;
            else mat[i][j] = -1;
        }
    }

    mat[1][1] = 0;
    int num = 1;
    int dir = 1;
    int i = 1, j = 1;

    while(Fib[num] < block){
        switch (dir % 4){
        case 1:
            if(mat[i][j+1] == -1) mat[i][++j] = Fib[num++];
            else dir++;
            break;
        case 2:
            if(mat[i+1][j] == -1) mat[++i][j] = Fib[num++];
            else dir++;
            break;
        case 3:
            if(mat[i][j-1] == -1) mat[i][--j] = Fib[num++];
            else dir++;
            break;
        case 0:
            if(mat[i-1][j] == -1) mat[--i][j] = Fib[num++];
            else dir++;
            break;
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}