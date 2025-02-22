#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int n;
    scanf("%d", &n);

    int odd[100], even[100];
    int ido = 0, ide = 0;

    for(int i=1; i<=n; i++){
        int inp;
        scanf("%d", &inp);

        if(inp % 2 == 0) even[ide++] = inp;
        else odd[ido++] = inp;
    }

    qsort(even, ide, sizeof(int), cmp);
    qsort(odd, ido, sizeof(int), cmp);

    for(int i=0; i<ide; i++) printf("%d ", even[i]);
    for(int i=0; i<ido; i++) printf("%d ", odd[i]);
}