#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int *sta = (int *) calloc(100000, sizeof(int));

    int count = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sta[arr[i]]++;

        if(sta[arr[i]] == 2) count++;
    }

    printf("%d\n", count);
    for(int i=0; i<n; i++){
        if(sta[arr[i]] > 1){
            printf("%d ", arr[i]);
            sta[arr[i]] = 0;
        }
    }
}