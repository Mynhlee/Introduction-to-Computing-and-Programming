#include <stdio.h>

#define true 1
#define false 0

int digit(int n){
    int flag6 = false;
    int sum = 0;


    while(n > 0){
        if(n % 10 == 6) flag6 = true;
        sum += n % 10;
        n /= 10;
    }

    if(!flag6) return false;
    if(sum % 10 != 8) return false;
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
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
        int tmp = b;
        b = a;
        a = tmp;
    }

    for(int i=a; i<=b; i++){
        if(palin(i) && digit(i)) printf("%d ", i);
    }
}