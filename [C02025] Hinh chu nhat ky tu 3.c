#include <stdio.h>
#include <string.h>

int main(){
    int row, column;
    scanf("%d %d", &row, &column);

    char alpha[column];
    for(int i=0; i<column; i++) alpha[i] = i + 64;

    for(int i=1; i<=row; i++){
        printf("%s\n", alpha);
        memmove(alpha, alpha+1, strlen(alpha)-1);
    }
}