#include <stdio.h>
int main(){
    int row;
    scanf("%d", &row);

    char alpha[row];
    int k = 65;
    for(int i=0; i<row; i++){
        alpha[i] = k;
        k += 2;
    } 
    
    for(int i=1; i<=row; i++){
        for(int j=i-1; j<row; j++) printf("%c", alpha[j]);
        printf("\n");
    }
}