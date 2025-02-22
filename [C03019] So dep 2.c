#include <stdio.h>
#include <math.h>
#include <string.h>

#define true 1
#define false 0

int sum_of_digit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int palin(int n){
    char s[99];
    int k = 0;

    while(n > 0){
        s[k++] = (n % 10) + '0';
        n /= 10;
    }
    s[k] = '\0';

    for(int i=0; i<=k/2; i++){
        if(s[i] != s[k-i-1]) return false;
    }
    return true;
}

int calculate(int start, int end){
    int count = 0;
    for(int i=start; i<=end; i++){
        if(sum_of_digit(i) % 10 == 0 && palin(i)) count++;
    }
    return count;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int start = powl(10, n-1);
        int end = powl(10, n);

        printf("%d\n", calculate(start, end));
    }
}