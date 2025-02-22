#include <stdio.h>

#define true 1
#define false 0

int check(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(check(i)) printf("%d\n", i);
    }
}