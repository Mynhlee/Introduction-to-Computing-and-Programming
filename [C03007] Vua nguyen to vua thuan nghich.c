#include <stdio.h>
#include <string.h>

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

int tnghich(int n){
    int len = 0, tmp = n;
    while(tmp > 0){
        tmp /= 10;
        len++;
    }

    char value[len];
    int k = len - 1;

    while(n > 0){
        value[k--] = (n % 10) + '0';
        n /= 10;
    }

    for(int i=0; i<=len/2; i++){
        if(value[i] != value[len - i - 1]) return false;
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
            if(prime(i) && tnghich(i)){
                printf("%d ", i);
                count++;
            }

            if(count == 10){
                printf("\n");
                count = 0;
            }
        }

        printf("\n\n");
    }
}