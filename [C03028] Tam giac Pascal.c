#include <stdio.h>

int Fact(int n){
    return (n <= 1) ? 1 : n * Fact(n - 1);
}

int main(){
    int row, column = 1;
    scanf("%d", &row);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            printf("%d ", Fact(i-1) / ( Fact(j-1) * Fact(i - j) ));
        }

        printf("\n");
        column++;
    }
}