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
    int t;
    scanf("%d", &t);

    for(int j=1; j<=t; j++){
        printf("Test %d:\n", j);
        
        int n;
        scanf("%d", &n);

        int *arr = (int *) calloc(n, sizeof(n));
        int *sta = (int *) calloc(100000, sizeof(n));

        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            if(prime(arr[i])) sta[arr[i]]++;
        }

        for(int i=0; i<100000; i++){
            if(sta[i] != 0) printf("%d xuat hien %d lan\n", i, sta[i]);
        }
        printf("\n");
    }
}