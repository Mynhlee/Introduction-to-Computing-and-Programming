#include <stdio.h>
#include <math.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int a = sqrt(m);
    int b = sqrt(n);
    int count = 0;
    int data[b-a+1], k = 0;

    for(int i=a; i<=b; i++){
        if(m<=i*i && i*i<=n){
            count++;
            data[k++] = i*i;
        }
    }

    printf("%d\n", count);
    for(int i=0; i<k; i++) printf("%d\n", data[i]);
}