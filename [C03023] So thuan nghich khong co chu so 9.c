#include <stdio.h>

#define true 1
#define false 0

int digit(int n){
    while(n > 0){
        if(n % 10 == 9) return false;
        n /= 10;
    }
    return true;
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


int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i=2; i<=n; i++){
        if(palin(i) && digit(i)){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);
}