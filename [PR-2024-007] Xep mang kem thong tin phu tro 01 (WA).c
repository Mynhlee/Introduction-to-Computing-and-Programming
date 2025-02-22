#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_CHAR 1001

typedef struct{
    int index;
    char *chr;
    double value;
} data;

int compare(const void *a, const void *b){
    data *x = (data *)a;
    data *y = (data *)b;

    // if(x->value < y->value) return -1;
    // if(x->value > y->value) return 1;
    // if(x->value == y->value) return x->index - y->index;

    double epsilon = 1e-9;
    double diff = x->value - y->value;

    if(fabs(diff) < epsilon) return x->index - y->index;
    return (diff < 0) ? -1 : 1;
}

void Export(data Array[], int m){
    for(int i=0; i<m; i++) printf("%s ", Array[i].chr);
    printf("\n");
    for(int i=0; i<m; i++) printf("%.3lf ", Array[i].value);
    printf("\n");
}

void function(){
    int m;
    scanf("%d", &m);
    data *array = (data *) malloc(m * sizeof(data));

    for(int i=0; i<m; i++){
        array[i].index = i;
        array[i].chr = (char *) malloc(MAX_CHAR * sizeof(char));
        scanf("%s", array[i].chr);
    }
    for(int i=0; i<m; i++) scanf("%lf", &array[i].value);

    qsort(array, m, sizeof(data), compare);
    Export(array, m);

    while(m > 1){
        strcat(array[0].chr, array[1].chr);
        array[0].value += array[1].value;

        free(array[1].chr);
        m--;

        for(int i=1; i<m; i++) array[i] = array[i + 1];
        qsort(array, m, sizeof(data), compare);
        Export(array, m);
    }

    for(int i = 0; i < m; i++) free(array[i].chr);
    free(array);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) function();
}