#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i=1; i<=n; i++){
        int inp;
        scanf("%d", &inp);

        if(inp >= max1){
            max2 = max1;
            max1 = inp;
        }
        else if(inp > max2 && inp != max1) max2 = inp;
    }
    printf("%d %d", max1, max2);
}