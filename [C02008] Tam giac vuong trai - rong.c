#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int count = 1;
    for(int i=1; i<=n; i++){
        if(i<=2 || i==n){
            for(int j=1; j<=i; j++) printf("*");
        }

        else{
            printf("*");
            for(int j=1; j<=count; j++) printf(".");
            
            printf("*");
            count++;
        }
        printf("\n");
    }
}