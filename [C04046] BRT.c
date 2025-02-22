#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int *x = (int *)a;
    int *y = (int *)b;  
    return *x - *y;
}

void function(){
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i=0; i<n; i++) scanf("%d", &array[i]);
    qsort(array, n, sizeof(int), compare);

    int dis[n]; dis[0] = 0;
    for(int i=1; i<n; i++) dis[i] = abs(array[i] - array[i-1]);
    qsort(dis, n, sizeof(int), compare);

    int count = 1;
    for(int i=2; i<n; i++){
        if(dis[1] == dis[i]) count++;
        else break;
    }

    printf("%d %d", dis[1], count);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}