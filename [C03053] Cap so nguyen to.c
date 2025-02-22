#include <stdio.h>
#include <math.h>

#define ll long long
#define true 1
#define false 0

prime(ll n){
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

        for(int i=2; i<=n/2; i++){
            if(prime(i) && prime(n-i)) printf("%d %d ", i, n-i);
        }
        printf("\n");
    }
}