#include <stdio.h>
int main(){
    int u, n, d;
    scanf("%d %d %d", &u, &d, &n);

    int sum = u;
    for(int i=1; i<n; i++){
        u += d;
        sum += u;
    }
    printf("%d", sum);
}