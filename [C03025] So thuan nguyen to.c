#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i = 2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool analyst(int n){
    int sum = 0;
    while(n > 0){
        int last = n % 10;
        if(last<2 || last==4 || last==6 || last==8 || last==9) return false;
        
        sum += last;
        n /= 10;
    }

    if(!isPrime(sum)) return false;
    return true;
}

void function(){
    int left, right;
    scanf("%d %d", &left, &right);

    int count = 0;
    for(int i=left; i<=right; i++){
        if(analyst(i) && isPrime(i)) count++;
    }
    printf("%d", count);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}