#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++){
        int min = arr[i];
        int index = -1;

        for(int j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        if(index != -1) swap(&arr[i], &arr[index]);

        for(int j=0; j<n; j++) printf("%d ", arr[j]);
        printf("\n");
    }
}