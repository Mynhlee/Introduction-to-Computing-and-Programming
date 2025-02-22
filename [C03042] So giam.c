#include <stdio.h>
#define true 1
#define false 0

check(int n){
    int first = n % 10;
    n /= 10;

    while(n > 0){
        if(n % 10 <= first) return false;
        first = n % 10;
        n /= 10;
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
            if(check(i)) count ++;
        }

        printf("%d\n", count);
    }
}