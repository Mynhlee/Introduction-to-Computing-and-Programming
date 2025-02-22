// TỔNG CÁC SỐ NGUYÊN TỐ THUỘC TAM GIÁC TRÊN
#include <stdio.h>
#include <stdbool.h>

bool prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int inp;
            scanf("%d", &inp);

            if(j>=i && prime(inp)) sum += inp;
        }
    }

    printf("%d", sum);
}