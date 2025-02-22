#include <stdio.h>
#include <math.h>
#include <string.h>

#define true 1
#define false 0

palindromic(int n, int size){
    char s[size];
    int i = 0;
    int sum = 0;

    while(n > 0){
        if(n % 10 == 4) return false;

        s[i++] = (n % 10) + '0';
        sum += n % 10;

        n /= 10;
    }
    s[i] = '\0';

    for(i=0; i<size; i++){
        if(s[i] != s[size - i - 1]) return false;
    }

    if(sum % 10 != 0) return false;
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int start = (int) powl(10, n-1);
        int endd = (int) powl(10, n);
        
        for(int i=start; i<endd; i++){
            if(palindromic(i, n)) printf("%d ", i);
        }

        printf("\n");
    }
}