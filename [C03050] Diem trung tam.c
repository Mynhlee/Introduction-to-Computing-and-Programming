#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    int array[n+1];
    memset(array, 0, sizeof(array));

    for(int i=1; i<=(n-1)*2; i++){
        int inp;
        scanf("%d", &inp);
        array[inp]++;
    }

    for(int i=1; i<=n; i++){
        if(array[i] == n - 1){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}