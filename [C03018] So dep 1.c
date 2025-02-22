// SỐ ĐẸP 1
#include <stdio.h>

#define true 1
#define false 0

int Fib[30];

void FibCreate(){
    Fib[0] = 0;
    Fib[1] = 1;
    for(int i=2; i<30; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int sumof(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int checkexist(int n){
    for(int i=0; i<30; i++){
        if(sumof(n) == Fib[i]) return true;
    }
    return false;
}

int main(){
    FibCreate();

    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    for(int i=a; i<=b; i++){
        if(prime(i) && checkexist(i)) printf("%d ", i);
    }
}