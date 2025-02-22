#include <stdio.h>
#define ll long long
int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld\n", a + b);
    printf("%lld\n", a - b);
    printf("%lld\n", a * b);
    printf("%lld\n", a / b);
    printf("%lld\n", a % b);
    printf("%.2lf", (1.0*a) / (1.0*b));
}