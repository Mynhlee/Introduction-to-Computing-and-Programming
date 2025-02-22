#include <stdio.h>
#include <string.h>

void function(){
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i=0; i<n; i++) scanf("%d", &array[i]);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(array[i] == array[j]){
                printf("%d", array[i]);
                return;
            }
        }
    }
    printf("NO");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}