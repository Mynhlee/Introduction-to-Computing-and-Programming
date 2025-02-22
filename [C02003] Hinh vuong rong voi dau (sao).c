#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<=n; j++) printf("*");
        }
        else{
            printf("*");
            for(int j=2; j<n; j++) printf(".");
            printf("*");
        }
        printf("\n");
    }
}