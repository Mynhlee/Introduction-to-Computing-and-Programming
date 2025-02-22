#include <stdio.h>
#include <math.h>

#define ll long long
#define true 1
#define false 0

int prime(ll n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

ll fmp(ll n){
    ll max_prime = 1;
    for(ll i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            if(prime(n/i)) return n/i;
            if(prime(i)) max_prime = (i > max_prime) ? i : max_prime;
        }
    }
    return max_prime;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll inp;
        scanf("%lld", &inp);
        printf("%lld\n", fmp(inp));
    }
}