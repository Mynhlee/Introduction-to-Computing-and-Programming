#include <stdio.h>

void result(long long n){
    long long tmp = n;
    for(long long i=2; i*i<=tmp; i++){
        if(n%i == 0){
            int count = 0;
            while(n%i == 0){
                count++;
                n/=i;
            }
            printf(" %lld(%d)", i, count);
        }
    }
    if(n > 1) printf(" %lld(%d)", n, 1);
}

int main(){
    long long t, count = 1;
    scanf("%lld", &t);

    while(t--){
        long long n;
        scanf("%lld", &n);
        printf("Test %lld:", count++);

        result(n);
        printf("\n");
    }
}