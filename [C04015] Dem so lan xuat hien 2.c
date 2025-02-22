#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int j=1; j<=t; j++){
        printf("Test %d:\n", j);
        
        int n;
        scanf("%d", &n);

        int *arr = (int *) calloc(n, sizeof(int));
        int *sta = (int *) calloc(1000000, sizeof(int));

        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            sta[arr[i]]++;
        }

        for(int i=0; i<n; i++){
            if(sta[arr[i]] != 0){
                printf("%d xuat hien %d lan\n", arr[i], sta[arr[i]]);
                sta[arr[i]] = 0;
            }   
        }
        printf("\n");
    }
}