#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a % b);
}

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld\n", gcd(a, b));
    printf("%lld", (a * b) / gcd(a, b));
}