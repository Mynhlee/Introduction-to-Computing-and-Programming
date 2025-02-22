#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            if(i == n/i) sum += i;
            else sum += i + n/i;
        }
    }

    if(sum - n == n) printf("1");
    else printf("0");
}