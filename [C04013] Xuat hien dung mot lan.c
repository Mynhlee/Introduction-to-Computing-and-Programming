#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *arr = (int *) calloc(n, sizeof(int));
    int *sta = (int *) calloc(1000000, sizeof(int));

    int count = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

        if(sta[arr[i]] == 0) count++;
        else if(sta[arr[i]] == 1) count--;

        sta[arr[i]]++;
    }

    printf("%d\n", count);
    
    for(int i=0; i<n; i++){
        if(sta[arr[i]] == 1){
            printf("%d ", arr[i]);
            sta[arr[i]] = 0;
        }
    }
}