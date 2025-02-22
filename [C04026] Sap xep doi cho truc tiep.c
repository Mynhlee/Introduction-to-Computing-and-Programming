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

    int count = 1;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]) swap(&arr[i], &arr[j]);
        }

        printf("Buoc %d: ", count++);
        for(int j=0; j<n; j++) printf("%d ", arr[j]);
        printf("\n");
    }
}