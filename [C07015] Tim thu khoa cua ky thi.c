#include <stdio.h>
#include <string.h>

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

int main(){
    int n;
    scanf("%d", &n);

    cand array[n];
    float max = 0;

    for(int i=0; i<n; i++){
        array[i] = Import(i + 1);
        max = (array[i].point > max) ? array[i].point : max;
    }

    for(int i=0; i<n; i++){
        if(array[i].point == max) Export(array[i]);
    }
}