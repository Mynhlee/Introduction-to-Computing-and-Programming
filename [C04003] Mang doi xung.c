#include <stdio.h>

#define true 1
#define false 0

symmetry(int a[], int size){
    for(int i=0; i<size; i++){
        if(a[i] != a[size - i]) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int array[n];
        for(int i=0; i<n; i++) scanf("%d", &array[i]);

        if(symmetry(array, n-1)) printf("YES\n");
        else printf("NO\n");
    }
}