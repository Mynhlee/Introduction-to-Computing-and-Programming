#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int lim = 64;
    for(int i=1; i<=n; i++){
        for(int j=64; j<lim; j+=2) printf("%c", j);
        for(int j=lim; j>=64; j-=2) printf("%c", j);
        
        lim += 2;
        printf("\n");
    }
}