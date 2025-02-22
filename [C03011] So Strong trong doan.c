#include<stdio.h>
typedef long long ll;
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
    int n, m;
    scanf("%d%d", &n, &m);
    if(n > m){
        int temp = n;
        n = m;
        m = temp;
    }
    for(int i  = n; i <= m; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
    return 0;
}