#include <stdio.h>
#include <stdbool.h>

bool prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    int mat[n][n+1];
    int max = 0, pos = -1;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
            if(prime(mat[i][j])) count++;
        }

        if(count > max){
            max = count;
            pos = i;
        }
    }

    printf("%d\n", pos + 1);
    for(int j=0; j<n; j++){
        if(prime(mat[pos][j])) printf("%d ", mat[pos][j]);
    }
}