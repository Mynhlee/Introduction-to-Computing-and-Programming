#include<stdio.h>
typedef long long ll;
ll fib[41];
void FibCreate(){
    fib[0] = 0;
    fib[1] = fib[2] = 1;
    for(int i = 3; i <= 40; i++){
        fib[i] = fib[i - 1 ] + fib[i - 2];
    }
}
int main(){
    FibCreate();
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 40; i++){
        if(n == fib[i]){
            printf("1");
            return 0;
        }
    }
    printf("0");
}