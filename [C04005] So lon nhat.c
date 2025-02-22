#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int array[n];
        int max = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &array[i]);
            max = (array[i] > max) ? array[i] : max;
        }

        printf("%d\n", max);
        for(int i=0; i<n; i++){
            if(array[i] == max) printf("%d ", i);
        }
        printf("\n");
    }

    
}