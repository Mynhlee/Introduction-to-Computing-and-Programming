#include <stdio.h>
int main(){
    int inp, min = __INT_MAX__;
    for(int i=1; i<=3; i++){
        scanf("%d", &inp);
        min = (inp < min) ? inp : min;
    }
    printf("%d", min);
}