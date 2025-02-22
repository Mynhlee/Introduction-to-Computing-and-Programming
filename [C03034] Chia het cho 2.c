#include <stdio.h>

int analyse(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;

    int count = 0;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            if(i == n/i){
                if(i % 2 == 0) count++;
            }
            else{
                if(i % 2 == 0) count++;
                if((n/i) % 2 == 0) count++;
            }
        }
    }

    return count;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", analyse(n));
    }
}