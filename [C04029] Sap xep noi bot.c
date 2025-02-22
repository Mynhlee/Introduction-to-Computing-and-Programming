#include <stdio.h>
#define true 1
#define false 0

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
        int flag = false;

        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = true;
            }
        }
        if(flag == false) break;

        printf("Buoc %d: ", i + 1);
        for(int j=0; j<n; j++) printf("%d ", arr[j]);
        printf("\n");
    }
}