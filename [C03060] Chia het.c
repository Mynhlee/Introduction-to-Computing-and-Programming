#include <stdio.h>

int count2(int n){
    int count = 0;
    while(n % 2 == 0){
        n /= 2;
        count ++;
    }
    return count;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int count = 0;
    for(int i=1; i<=n; i++){
        if(i % 2 == 0) count += count2(i);
        if(count >= k){
            printf("Yes");
            return 0;
        }       
    }
    printf("No");
}