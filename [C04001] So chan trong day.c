#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        for(int i=1; i<=n; i++){
            int inp;
            scanf("%d", &inp);
            if(inp % 2 == 0) printf("%d ", inp);
        }
        printf("\n");
    }
}