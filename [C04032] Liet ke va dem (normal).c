#include <stdio.h>
#include <stdbool.h>
#define MAX 100000

int array[MAX];
int stat[MAX];

bool check(int n){
    int last = n % 10;
    while(n > 0){
        if(n % 10 > last) return false;
        last = n % 10;
        n /= 10;
    }
    return true;
}

int find(int lim, int value){
    for(int i=0; i<lim; i++){
        if(array[i] == value) return i;
    }
    return -1;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int lim){
    for(int i=0; i<lim; i++){
        for(int j=i+1; j<lim; j++){
            if(stat[i] < stat[j]){
                swap(&array[i], &array[j]);
                swap(&stat[i], &stat[j]);
            }
        }
    }
}

int main(){
    int input, k = 0;

    while(scanf("%d", &input) == 1){
        if(check(input)){
            int pos = find(k, input);
            if(pos != -1) stat[pos]++;
            else{
                array[k] = input;
                stat[k++] = 1;
            }
        }
    }
    sort(k);

    for(int i=0; i<k; i++){
        printf("%d %d\n", array[i], stat[i]);
    }
}