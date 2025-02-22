#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    char arr[n+1][n+1];
    int start = 1;
    int count = 65;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j < start) arr[i][j] = 0;
            else arr[i][j] = count++;
        }
        start++;
    }

    for(int j=1; j<=n; j++){
        for(int i=1; i<=n; i++){
            if(arr[i][j] != 0) printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}