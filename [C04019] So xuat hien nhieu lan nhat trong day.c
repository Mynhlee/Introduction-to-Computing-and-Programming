#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int inp[100], sta[100];
        memset(sta, 0, sizeof(sta));

        int max = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &inp[i]);
            sta[inp[i]]++;
            max = (sta[inp[i]] > max) ? sta[inp[i]] : max;
        }

        for(int i=0; i<n; i++){
            if(sta[inp[i]] == max){
                printf("%d ", inp[i]);
                sta[inp[i]] = 0;
            }
        }
        printf("\n");
    }
}