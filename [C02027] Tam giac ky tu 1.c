#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int index = 97;
    for(int i=1; i<=n; i++){
        if(i % 2 == 1){
            for(int j=index; j<index+i; j++) printf("%c ", j);
        }
        else{
            for(int j=index+i-1; j>=index; j--) printf("%c ", j);
        }

        index += i;
        printf("\n");
    }
}