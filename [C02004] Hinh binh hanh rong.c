#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int mark = n - 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<mark; j++) printf("~");

        if(i==1 || i==n){
            for(int j=1; j<=n; j++) printf("*");
        }
        else{
            printf("*");
            for(int j=2; j<n; j++) printf(".");
            printf("*");
        }

        printf("\n");
        mark--;
    }
}