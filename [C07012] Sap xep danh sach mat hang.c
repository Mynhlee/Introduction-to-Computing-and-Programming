#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[100];
    char group[100];
    double buy;
    double sell;
    double profit;
} items;

items Import(int index){
    items input;
    input.id = index;
    
    scanf("\n");
    fgets(input.name, sizeof(input.name), stdin);
    input.name[strlen(input.name) - 1] = '\0';

    scanf("\n");
    fgets(input.group, sizeof(input.group), stdin);
    input.group[strlen(input.group) - 1] = '\0';

    scanf("%lf %lf", &input.buy, &input.sell);
    input.profit = input.sell - input.buy;

    return input;
}

void Export(items value){
    printf("%d ", value.id);
    printf("%s ", value.name);
    printf("%s ", value.group);
    printf("%.2lf", value.profit);
}

int compare(const void *a, const void *b){
    items *x = (items *)a;
    items *y = (items *)b;

    return (y->profit) - (x->profit);
}

int main(){
    int n;
    scanf("%d", &n);

    items array[n];
    for(int i=0; i<n; i++) array[i] = Import(i + 1);
    qsort(array, n, sizeof(items), compare);

    for(int i=0; i<n; i++){
        Export(array[i]);
        printf("\n");
    }
}