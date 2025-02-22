#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a % b);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if(gcd(a, b) == gcd(c, d)) printf("YES\n");
        else printf("NO\n");
    }
}