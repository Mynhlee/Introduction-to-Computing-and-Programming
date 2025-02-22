#include <stdio.h>
#define true 1
#define false 0

prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

check(int n){
    if(!prime(n)) return false;

    while(n > 0){
        if(!prime(n % 10)) return false;
        n /= 10;
    }

    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);

        int count = 0;
        for(int i=a; i<=b; i++){
            if(check(i)) count++;
        }

        printf("%d\n", count);
    }
}