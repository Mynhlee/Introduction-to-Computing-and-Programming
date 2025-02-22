#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int array[n+1];
        int max = 0;
        int count = 0;
        array[0] = 0;

        for(int i=1; i<=n; i++){
            scanf("%d", &array[i]);
            if(array[i] >= max){
                max = array[i];
                count++;
            }
        }
        printf("%d\n", count);
    }
}