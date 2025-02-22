#include <stdio.h>
#define true 1
#define false 0

int main(){
    int n;
    scanf("%d", &n);

    int sta[100000] = {0};
    for(int i=1; i<=n; i++){
        int inp;
        scanf("%d", &inp);

        if(!sta[inp]){
            printf("%d ", inp);
            sta[inp] = true;
        }
    }
}