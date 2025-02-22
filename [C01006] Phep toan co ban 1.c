#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(b == 0){
        printf("0");
        return 0;
    }

    printf("%d ", a + b);
    printf("%d ", a - b);
    printf("%d ", a * b);
    printf("%.2lf ", (1.0*a) / (1.0*b));
    printf("%d", a % b);
}