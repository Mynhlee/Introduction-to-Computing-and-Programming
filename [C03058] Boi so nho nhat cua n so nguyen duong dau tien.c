#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a % b);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        ll res = 1;
        for(ll i=1; i<=n; i++){
            res = (res * i) / gcd(res, i);
        }

        printf("%lld\n", res);
    }
}