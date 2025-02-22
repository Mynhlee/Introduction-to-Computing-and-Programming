#include <stdio.h>
#include <string.h>

void swap(char mat[][10], int row, int coll){
    for(int i=0; i<=row; i++){
        for(int j=0; j<=coll; j++){
            if(mat[i][j] == '1') mat[i][j] = '0';
            else mat[i][j] = '1';
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    char mat[n][10];
    for(int i=0; i<n; i++) scanf("%s", mat[i]);

    int count = 0;
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(mat[i][j] == '1'){
                swap(mat, i, j);
                count++;
            }
        }
    }
    printf("%d", count);
}