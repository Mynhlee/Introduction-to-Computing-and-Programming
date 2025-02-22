#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++)
        if(n % i == 0) return false;
    return true;
}

int Reverse(int n){
    int res = 0;
    while(n > 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        if(isPrime(n) && isPrime(Reverse(n))) printf("1 ");
        else printf("0 ");
    }
}