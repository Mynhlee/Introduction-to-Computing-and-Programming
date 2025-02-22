#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char array[n][100];
    int sum = 0;
    int pos = 0, max = 0;

    for(int i=0; i<n; i++){
        int k, m;

        scanf("%s", array[i]);
        scanf("%d %d", &k, &m);
        
        int count = 0;
        while(m >= k){
            count += m / k;
            m = 2 * (m / k) + m % k;
        }

        sum += count;
        if(count > max){
            max = count;
            pos = i;
        }
    }

    printf("%d\n", sum);
    printf("%s", array[pos]);
}