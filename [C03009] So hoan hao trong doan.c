#include <stdio.h>

#define true 1
#define false 0

int perfect(int n){
    int sum = 0;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            if(i == n/i) sum += i;
            else sum += i + n/i;
        }
    }

    if(sum - n == n) return true;
    return false;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    for(int i=a; i<=b; i++){
        if(perfect(i)) printf("%d ", i);
    }
}