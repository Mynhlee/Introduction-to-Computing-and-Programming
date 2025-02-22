// HÌNH VUÔNG
#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        int c, d;

        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);

        if(abs(c-a) == abs(d-b)) printf("YES\n");
        else printf("NO\n");
    }
}