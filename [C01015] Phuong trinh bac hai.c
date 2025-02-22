#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int delta = b*b - 4*a*c;

    if(delta < 0){
        printf("NO");
        return 0;
    }
    if(delta == 0){
        printf("%.2f", (0-1.0*b)/(2.0*a));
        return 0;
    }

    float x1 = ((0-1.0*b) + sqrt(delta)) / (2.0*a);
    float x2 = ((0-1.0*b) - sqrt(delta)) / (2.0*a);
    printf("%.2f %.2f", x1, x2);
}