#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int first;
    int second;
    int third;
    double area;
}rectangle;

double CalArea(int a, int b, int c){
    double p = 1.0 * (a + b + c) / 2;
    double area = sqrt(p * (p-a) * (p-b) * (p-c));
    return area;
}

rectangle import(){
    rectangle inp;
    scanf("%d", &inp.first);
    scanf("%d", &inp.second);
    scanf("%d", &inp.third);
    inp.area = CalArea(inp.first, inp.second, inp.third);
    return inp;
}

void print(rectangle out){
    printf("%d ", out.first);
    printf("%d ", out.second);
    printf("%d ", out.third);
    //printf("%.3lf", out.area);
}

int compare(const void *a, const void *b){
    rectangle *value1 = (rectangle *)a;
    rectangle *value2 = (rectangle *)b;
    return value1->area - value2->area;
}

int main(){
    int i, n;
    scanf("%d", &n);

    rectangle arr[n];
    for(i=0; i<n; i++) arr[i] = import();

    qsort(arr, n, sizeof(rectangle), compare);
    for(i=0; i<n; i++){
        print(arr[i]);
        printf("\n");
    }
}
