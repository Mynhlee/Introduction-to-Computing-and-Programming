// BỘI SỐ CHUNG - ƯỚC SỐ CHUNG
#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a % b);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", (a * b) / gcd(a, b), gcd(a, b));
    }
}