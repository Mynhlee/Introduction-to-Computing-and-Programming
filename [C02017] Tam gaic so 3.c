#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int lim = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<lim; j+=2) printf("%d", j);
        for(int j=lim; j>=1; j-=2) printf("%d", j);

        lim+=2;
        printf("\n");
    }
}