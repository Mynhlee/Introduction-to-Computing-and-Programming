#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    if(n == 1){
        printf("0");
        return 0;
    }
    if(n >= 2){
        printf("0 1 ");
        if(n == 2) return 0;
        n -= 2;
    }

    int first = 0;
    int second = 1;
    
    while(n--){
        int now = first + second;
        first = second;
        second = now;
        // n--;
        printf("%d ", now);
    }
}