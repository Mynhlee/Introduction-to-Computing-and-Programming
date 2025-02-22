#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int prime[400];
void Create(int lim){
    int num = 2;
    int index = 1;

    while(index <= lim){
        if(CheckPrime(num)) prime[index++] = num++;
        else num++;
    }
}

void function(){
    int n;
    scanf("%d", &n);

    Create(n*n + 1);
    int mat[n+2][n+2];

    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if(i==0 || j==0 || i>n || j>n) mat[i][j] = -1;
            else mat[i][j] = 0;
        }
    }

    mat[1][1] = 2;
    int num = 2;
    int dir = 1;
    int i = 1, j = 1;

    while(prime[num] <= prime[n*n]){
        switch (dir % 4){
        case 1:
            if(mat[i][j+1] == 0) mat[i][++j] = prime[num++];
            else dir++;
            break;
        case 2:
            if(mat[i+1][j] == 0) mat[++i][j] = prime[num++];
            else dir++;
            break;
        case 3:
            if(mat[i][j-1] == 0) mat[i][--j] = prime[num++];
            else dir++;
            break;
        case 0:
            if(mat[i-1][j] == 0) mat[--i][j] = prime[num++];
            else dir++;
            break;
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) printf("%d ", mat[i][j]);
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