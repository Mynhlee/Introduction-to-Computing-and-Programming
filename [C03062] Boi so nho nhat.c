#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a % b);
}

void function(){
    ll n, m;
    scanf("%lld %lld", &n, &m);

    if(n > m){
        ll tmp = n;
        n = m;
        m = tmp;
    }

    ll res = 1;
    for(ll i=n; i<=m; i++) res = res * i / gcd(res, i);
    printf("%lld", res);
}

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        function();
        printf("\n");
    }
}