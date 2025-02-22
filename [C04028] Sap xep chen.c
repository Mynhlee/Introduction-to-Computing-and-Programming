#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        qsort(arr, count+1, sizeof(int), cmp);

        printf("Buoc %d: ", count++);
        for(int j=0; j<count; j++) printf("%d ", arr[j]);
        printf("\n");
    }
}