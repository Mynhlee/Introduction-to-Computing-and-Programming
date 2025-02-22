#include <stdio.h>
#define ll long long

ll Fact(ll n){
    if(n <= 1) return 1;
    return n * Fact(n-1);
}

int main(){
    ll n;
    scanf("%lld", &n);

    ll compare = n;
    ll sum = 0;

    while(n > 0){
        sum += Fact(n % 10);
        n /= 10;
    }

    if(sum == compare) printf("1");
    else printf("0");
}