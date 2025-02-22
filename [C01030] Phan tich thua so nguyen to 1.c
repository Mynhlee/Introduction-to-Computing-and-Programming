#include <stdio.h>

void PrimeFactors(int n){
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            printf("%d ", i);
            n /= i;
        }
        else i++;
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        PrimeFactors(n);
        printf("\n");
    }
}