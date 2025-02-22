// LOẠI BỎ HÀNG VÀ CỘT CÓ TỔNG LỚN NHẤT RA KHỎI MA TRẬN
#include <stdio.h>

void function(){
    int m, n;
    scanf("%d %d", &m, &n);

    int arr[m+1][n+1];
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i == 0 || j == 0) arr[i][j] = 0;
            else scanf("%d", &arr[i][j]);
        }
    }
    
    int max = 0, pos = -1;
    for(int i=1; i<=m; i++){
        arr[i][0] = 0;
        for(int j=1; j<=n; j++) arr[i][0] += arr[i][j];

        if(arr[i][0] > max){
            max = arr[i][0];
            pos = i;
        }
    }
    for(int j=1; j<=n; j++) arr[pos][j] = -1;

    max = 0; pos = -1;
    for(int j=1; j<=n; j++){
        arr[0][j] = 0;

        for(int i=1; i<=m; i++){
            if(arr[i][j] != -1) arr[0][j] += arr[i][j];
        }

        if(arr[0][j] > max){
            max = arr[0][j];
            pos = j;
        }
    }
    for(int i=1; i<=m; i++) arr[i][pos] = -1;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(arr[i][j] != -1) printf("%d ", arr[i][j]);
        }
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