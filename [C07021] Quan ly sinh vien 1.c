#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000
#define MAX_NAME 1000

typedef struct{
    int id;
    char name[MAX_NAME];
    float gradeA;
    float gradeB;
    float gradeC;
    float sum;
} student;

student data[MAX + 1];
int indexx;

int compare(const void *a, const void *b){
    student *x = (student *)a;
    student *y = (student *)b;
    
    if(x->sum < y->sum) return -1;
    if(x->sum > y->sum) return 1;
    return 0;
}

// option 1
void create(){
    int n;
    scanf("%d", &n);
    printf("%d", n);

    while(n--){
        data[indexx].id = indexx + 1;

        char s[MAX_NAME];
        scanf("\n");

        fgets(s, sizeof(s), stdin);
        s[strlen(s) - 1] = '\0';
        strcpy(data[indexx].name, s);

        scanf("%f %f %f", &data[indexx].gradeA, &data[indexx].gradeB, &data[indexx].gradeC);
        data[indexx].sum = data[indexx].gradeA + data[indexx].gradeB + data[indexx].gradeC;
        indexx++;
    }
}

// option 2
void update(){
    int n;
    scanf("%d", &n);
    printf("%d", n);

    char s[MAX_NAME];
    scanf("\n");
    fgets(s, sizeof(s), stdin);

    s[strlen(s) - 1] = '\0';
    strcpy(data[n - 1].name, s);

    scanf("%f %f %f", &data[n - 1].gradeA, &data[n - 1].gradeB, &data[n - 1].gradeC);
    data[n-1].sum = data[n - 1].gradeA + data[n - 1].gradeB + data[n - 1].gradeC;
}

// option 3
void display(){
    qsort(data, indexx, sizeof(student), compare);
    for(int i=0; i<indexx; i++){
        printf("%d %s ", data[i].id, data[i].name);
        printf("%.1f %.1f %.1f\n", data[i].gradeA, data[i].gradeB, data[i].gradeC);
    }
}

int main(){
    indexx = 0;
    int n;

    while(scanf("%d", &n) != -1){
        switch (n){
        case 1:
            create();
            break;
        case 2:
            update();
            break;;
        case 3:
            display();
            break;
        }
        printf("\n");
    }
}