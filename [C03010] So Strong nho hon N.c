#include<stdio.h>

int giaithua(int n){
    if(n <= 1){
        return 1;
    }
    return n * giaithua(n - 1);
}
int check(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += giaithua(tmp % 10);
        tmp /= 10;
    }
    if(sum == n){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i  = 1; i <= n; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
    return 0;
}