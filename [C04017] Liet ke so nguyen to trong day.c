#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(prime(arr[i])) count++;
        else arr[i] = 0;
    }

    printf("%d ", count);
    for(int i=0; i<n; i++){
        if(arr[i] != 0) printf("%d ", arr[i]);
    }
}