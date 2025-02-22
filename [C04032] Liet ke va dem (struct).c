#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 100000

typedef struct{
    int value;
    int count;
} data;

bool check(int n){
    int last = n % 10;
    while(n > 0){
        if(n % 10 > last) return false;
        last = n % 10;
        n /= 10;
    }
    return true;
}

int compare(const void *a, const void *b){
    data *x = (data *)a;
    data *y = (data *)b;
    return y->count - x->count;
}

int main(){
    data array[MAX];
    memset(array, 0, sizeof(array));

    int input, k = 0;
    int lim = 0;

    while(scanf("%d", &input) == 1){
        if(check(input)){
            array[input].value = input;
            array[input].count++;

            lim = (input > lim) ? input : lim;
            k++;
        }
    }

    qsort(array, lim + 1, sizeof(data), compare);
    for(int i=0; i<k; i++){
        if(array[i].value != 0){
            printf("%d %d\n", array[i].value, array[i].count);
        }
    }
}