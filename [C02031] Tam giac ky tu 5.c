#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char alpha[n];
    for(int i=0; i<n*2-1; i++) alpha[i] = i + 64;

    int count = 0;

    for(int i=1; i<=n; i++){
        int start = n*2 - n - i;
        int end = n*2 - 1 - i - count;

        for(int j=start; j<=end; j++) printf("%c", alpha[j]);
        count++;
        printf("\n");
    }
}