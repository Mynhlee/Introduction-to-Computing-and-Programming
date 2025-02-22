#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int a[1001];
int b[1001];

void input(int arr[], int size){
    for(int i=1; i<=size; i++){
        int inp;
        scanf("%d", &inp);
        arr[inp] = true;
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    input(a, n);
    input(b, m);

    for(int i=1; i<=1000; i++){
        if(a[i] && b[i]) printf("%d ", i);
    }

    printf("\n");
    for(int i=1; i<=1000; i++){
        if(a[i] && !b[i]) printf("%d ", i);
    }

    printf("\n");
    for(int i=1; i<=1000; i++){
        if(!a[i] && b[i]) printf("%d ", i);
    }
}