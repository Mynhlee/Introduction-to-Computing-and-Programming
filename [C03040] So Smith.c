#include <stdio.h>

int SumofDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int analyze(int n){
    int i = 2;
    int sum = 0;

    while(n > 1){
        if(n % i == 0){
            while(n % i == 0){
                if(i > 9) sum += SumofDigits(i);
                else sum += i;
                n /= i;
            }
        }
        else i++;
    }

    return sum;
}

int main(){
    int n;
    scanf("%d", &n);

    if(SumofDigits(n) == analyze(n)) printf("YES");
    else printf("NO");
}