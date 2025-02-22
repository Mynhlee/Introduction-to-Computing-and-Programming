#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(){
    int n;
    scanf("%d", &n);

    int in[n+1], dur[n+1], out[n+1];
    in[0] = dur[0] = out[0] = 0;

    for(int i=1; i<=n; i++) scanf("%d %d", &in[i], &dur[i]);

    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(in[i] > in[j]){
                swap(&in[i], &in[j]);
                swap(&dur[i], &dur[j]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(out[i-1] > in[i]) out[i] = out[i-1] + dur[i];
        else out[i] = in[i] + dur[i];
    }

    printf("%d", out[n]);
}