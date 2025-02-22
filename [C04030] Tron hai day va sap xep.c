#include <stdio.h>
#include <stdlib.h>

int CompareUp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int CompareDown(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

void function(){
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), CompareUp);
    qsort(b, n, sizeof(int), CompareDown);
 
    for(int i=0; i<n; i++){
        printf("%d %d ", a[i], b[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        function();
        printf("\n");
    }
}