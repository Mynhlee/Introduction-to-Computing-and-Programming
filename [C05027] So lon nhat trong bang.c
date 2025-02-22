#include <stdio.h>
#define ll long long
int main(){
    int n;
    scanf("%d", &n);

    ll row = __INT_MAX__;
    ll col = __INT_MAX__;

    for(int i=1; i<=n; i++){
        ll a, b;
        scanf("%lld %lld", &a, &b);

        row = (a < row) ? a : row;
        col = (b < col) ? b : col;
    }

    printf("%lld", row * col);
}