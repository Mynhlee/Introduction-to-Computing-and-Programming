#include <stdio.h>

void function(){
    int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int size = sizeof(money) / sizeof(int);

    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i=size-1; i>=0; i--){
        if(n >= money[i]){
            count += (n / money[i]);
            n -= (n/money[i]) * money[i];
        }
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