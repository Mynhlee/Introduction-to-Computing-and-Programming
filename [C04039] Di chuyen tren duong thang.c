#include <stdio.h>
#include <math.h>

void function(int x, int y){
    int d = abs(y -x);
    int k = sqrt(d);

    if(k * k == d) printf("%d", 2*k-1);
    else if(k*k < d && d <= k*k+k) printf("%d", 2*k);
    else printf("%d", 2*k+1);
}

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != -1){
        function(x, y);
        printf("\n");
    }
}