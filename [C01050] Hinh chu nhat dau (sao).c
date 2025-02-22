// HÌNH CHỮ NHẬT DẤU *
#include <stdio.h>
int main(){
    int column, row;
    scanf("%d %d", &column, &row);

    for(int i=1; i<=row; i++){
        if(i==1 || i==row){
            for(int j=1; j<=column; j++) printf("*");
        }
        else{
            printf("*");
            for(int j=2; j<column; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}