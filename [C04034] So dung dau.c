#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; i++) scanf("%d", &arr[i]);

        int max = -1;
        int res[n], count = 0;

        for(int i=n-1; i>=0; i--){
            if(arr[i] > max){
                res[count++] = arr[i];
                max = arr[i];
            }
        }

        for(int i=count-1; i>=0; i--) printf("%d ", res[i]);
        printf("\n");
    }
}