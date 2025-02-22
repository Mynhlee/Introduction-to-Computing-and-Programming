#include <stdio.h>

#define true 1
#define false 0

prime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        for(int i=1; i<=n; i++){
            int inp;
            scanf("%d", &inp);
            if(prime(inp)) printf("%d ", inp);
        }
        printf("\n");
    }
}