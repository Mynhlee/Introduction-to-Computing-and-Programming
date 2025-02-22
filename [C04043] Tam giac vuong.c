#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define ll long long

int compare(const void *a, const void *b){
    ll *x = (ll *)a;
    ll *y = (ll *)b;
    
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

void function(){
    ll n;
    scanf("%lld", &n);

    if(n < 3){
        printf("NO");
        return;
    }

    ll array[n];
    for(ll i=0; i<n; i++){
        scanf("%lld", &array[i]);
        array[i] *= array[i];
    }

    qsort(array, n, sizeof(ll), compare);

    ll c = n - 1;
    while(c > 1){
        ll a = 0;
        ll b = c - 1;

        while(a < b){
            if(array[a] + array[b] < array[c]) a++;
            else if(array[a] + array[b] > array[c]) b--;
            else{
                printf("YES");
                return;
            }
        }
        c--;
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