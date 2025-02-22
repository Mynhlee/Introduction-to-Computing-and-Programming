#include <stdio.h>

int calculate(int n, int p){
    int count = 0;
    while(n / p > 0){
        count += (n / p);
        n /= p;
    }
    return count;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, p;
        scanf("%d %d", &n, &p);
        printf("%d\n", calculate(n, p));
    }
}