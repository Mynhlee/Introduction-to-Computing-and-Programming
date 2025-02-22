#include <stdio.h>

void function(){
    int n;
    scanf("%d", &n);

    int arr[n], sta[n];
    int maxlength = 1;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

        if(i == 0) sta[i] = 1;
        else{
            if(arr[i] > arr[i-1]) sta[i] = sta[i-1] + 1;
            else sta[i] = 1;
        }

        maxlength = (sta[i] > maxlength) ? sta[i] : maxlength;
    }

    printf("%d\n", maxlength);

    for(int i=0; i<n; i++){
        if(sta[i] == maxlength){
            int start = i - maxlength + 1;
            for(int j=start; j<=i; j++) printf("%d ", arr[j]);
            printf("\n");
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        function();
        printf("\n");
    }
}