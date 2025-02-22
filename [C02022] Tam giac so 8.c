#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int count = 1;

    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            for(int j=count+i-1; j>=count; j--) printf("%d ", j);
        }
        else{
            for(int j=count; j<count+i; j++) printf("%d ", j);
        }
        count = count + i;
        printf("\n");
    }
}