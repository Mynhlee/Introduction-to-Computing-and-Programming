#include <stdio.h>
#define ll long long

void function(){
    int n;
    scanf("%d", &n);

    ll sum = 0;
    ll max = 0 - __INT_MAX__;

    for(int i=0; i<n; i++){
        ll inp;
        scanf("%lld", &inp);

        sum += inp;
        if(sum < 0) sum = 0;

        max = (sum > max) ? sum : max;
    }

    printf("%lld", max);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}