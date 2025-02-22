#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int multi = 1;
    while(n > 0){
        multi *= n % 10;
        n /= 10;
    } 
    printf("%d", multi);
}