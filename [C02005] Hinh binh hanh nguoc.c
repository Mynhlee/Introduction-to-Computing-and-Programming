#include <stdio.h>
int main(){
    int row, column;
    scanf("%d %d", &row, &column);

    int mark = 0;
    for(int i=1; i<=row; i++){
        for(int j=0; j<mark; j++) printf("~");
        for(int j=1; j<=column; j++) printf("*");

        printf("\n");
        mark++;
    }
}