// TỔNG CHỮ SỐ CHIA HẾT CHO 5
#include <stdio.h>
#define true 1
#define false 0

int prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int sum_of_digit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    
    if(sum % 5 == 0) return true;
    else return false;
}

int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i=1; i<=n; i++){
        if(prime(i) && sum_of_digit(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}