#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *arr = (int *) calloc(n, sizeof(int));
    int *sta = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sta[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(sta[arr[i]] > 1){
            printf("%d ", arr[i]);
            sta[arr[i]] = 0;
        }
    }
}