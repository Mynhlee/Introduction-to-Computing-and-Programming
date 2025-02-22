// ƯỚC SỐ CHIA HẾT CHO 2
#include <stdio.h>

int count(int n){
    int counter = 0;
    
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            if(i == n / i){
                if(i % 2 == 0) counter++;
            }
            else{
                if(i % 2 == 0) counter++;
                if((n/i) % 2 == 0) counter++;
            }
        }
    }

    return counter;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", count(n));
    }
}