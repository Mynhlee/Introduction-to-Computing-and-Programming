#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[100];
    char date[10];
    float point;
} cand;

cand Import(int index){
    cand input;
    input.id = index;

    scanf("\n");
    fgets(input.name, sizeof(input.name), stdin);
    input.name[strlen(input.name) - 1] = '\0';

    scanf("%s", input.date);

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    input.point = a + b + c;

    return input;
}

void Export(cand value){
    printf("%d ", value.id);
    printf("%s ", value.name);
    printf("%s ", value.date);
    printf("%.1f\n", value.point);
}

int compare(const void *a, const void *b){
    cand *x = (cand *)a;
    cand *y = (cand *)b;

    int yp = (y->point) * 10, xp = (x->point) * 10;
    if(yp - xp != 0) return yp - xp;
    return x->id - y->id;
}

int main(){
    int n;
    scanf("%d", &n);

    cand array[n];
    for(int i=0; i<n; i++) array[i] = Import(i + 1);

    qsort(array, n, sizeof(cand), compare);
    for(int i=0; i<n; i++) Export(array[i]);
}