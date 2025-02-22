#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-count; j++) printf("~");
        for(int j=n-count+1; j<=n; j++) printf("*");
        
        printf("\n");
        count++;
    }
}