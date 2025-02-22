#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int mang[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &mang[i]);
    }
    for(int i = 0; i < n; i++){
        if(mang[i] % 2 == 0){
            printf("%d ", mang[i]);
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        if(mang[i] % 2 != 0){
            printf("%d ", mang[i]);
        }
    }
    return 0;
}