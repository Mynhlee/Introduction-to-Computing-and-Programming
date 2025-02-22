#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0;
    int min = __INT_MAX__;

    for(int i=1; i<=n; i++){
        int up, down;
        scanf("%d %d", &up, &down);

        sum += up;
        min = (down < min) ? down : min;
    }

    printf("%d", sum + min);
}