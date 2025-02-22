#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);

    int array[size];

    int min1 = __INT_MAX__;
    int min2 = __INT_MAX__;

    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);

        if(array[i] < min1){
            min2 = min1;
            min1 = array[i];
        }
        if(min1 < array[i] && array[i] < min2) min2 = array[i];
    }

    printf("%d %d", min1, min2);
}