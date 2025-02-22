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
        ll l, r;
        scanf("%lld %lld", &l, &r);

        ll sl = sqrt(l);
        ll sr = sqrt(r);

        int count = 0;

        for(ll i=sl; i<=sr; i++){
            if(prime(i) && l<=i*i && i*i<=r) count++;
            if(i*i < l || r < i*i) break;
        }

        printf("%d\n", count);
    }
}