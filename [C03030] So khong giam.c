#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

int check(int n){
    int first = n % 10;

    while(n > 0){
        n /= 10;
        if(first < n % 10) return false;
        first = n % 10;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int start = (int) powl(10, n-1);
        int endd = (int) powl(10, n);

        for(int i=start; i<endd; i++){
            if(check(i)) printf("%d ", i);
        }

        printf("\n");
    }
}