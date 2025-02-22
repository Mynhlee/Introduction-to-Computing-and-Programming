#include <stdio.h>
#define ll long long

ll Fib[100];

void FibCreate(){
    Fib[0] = 0;
    Fib[1] = 1;

    for(int i=2; i<=100; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int main(){
    FibCreate();
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", Fib[n]);
    }
}