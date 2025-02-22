#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for(int k=1; k<=t; k++){
        printf("Test %d:\n", k);
        
        int n, m;
        scanf("%d %d", &n, &m);

        int arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) scanf("%d", &arr[i][j]);
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++) printf("%d ", arr[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}