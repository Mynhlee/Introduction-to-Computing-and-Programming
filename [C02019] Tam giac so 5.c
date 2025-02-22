#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int lim = 2;
    for(int i=1; i<=n; i++){
        for(int j=2; j<lim; j+=2) printf("%d", j);
        for(int j=lim; j>=2; j-=2) printf("%d", j);

        lim+=2;
        printf("\n");
    }
}