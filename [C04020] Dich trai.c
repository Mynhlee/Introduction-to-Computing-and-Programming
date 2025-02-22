#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int trans;
    scanf("%d", &trans);

    for(int i=trans; i<n; i++) printf("%d ", arr[i]);
    for(int i=0; i<trans; i++) printf("%d ", arr[i]);
}