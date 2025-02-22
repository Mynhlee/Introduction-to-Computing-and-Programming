#include <stdio.h>
#define ll long long
#define true 1
#define false 0

ll Fib[93];

void FibCreate(){
    Fib[0] = 0;
    Fib[1] = 1;

    for(int i=2; i<=92; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int find(ll n){
    for(int i=0; i<=92; i++){
        if(Fib[i] == n) return true;
        if(n < Fib[i]) return false;
    }
}

int main(){
    FibCreate();
    int t;
    scanf("%d", &t);

    while(t--){
        ll inp;
        scanf("%lld", &inp);

        if(find(inp)) printf("YES\n");
        else printf("NO\n");
    }
}