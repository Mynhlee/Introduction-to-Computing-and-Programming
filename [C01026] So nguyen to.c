#include <stdio.h>
#define true 1
#define false 0

int Prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        
        if(Prime(n)) printf("YES\n");
        else printf("NO\n");
    }
}