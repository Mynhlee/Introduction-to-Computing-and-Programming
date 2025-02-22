#include <stdio.h>

void analyse(int n){
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0){
                n /= i;
                count++;
            }
            if(n <= 1) printf("%d^%d", i, count);
            else printf("%d^%d * ", i, count);
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

        printf("%d = ", n);
        analyse(n);
        printf("\n");
    }
}