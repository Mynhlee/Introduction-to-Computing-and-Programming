#include <stdio.h>
#include <math.h>
#define ll long long

ll Length_of_Square(ll Square){
    ll len = sqrt(Square);
    if(len * len == Square) return len;
    return 0;
}

void swap(ll *a, ll *b){
    ll temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    ll a, b, c, d, e, f;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);

    ll S = a * b + c * d + e * f;
    ll length = Length_of_Square(S);

    if(length == 0){
        printf("NO");
        return 0;
    }
    
    if(a > b) swap(&a, &b);
    if(c > d) swap(&c, &d);
    if(e > f) swap(&e, &f);

    if(length == b && length == d && length == f){
        printf("YES");
        return 0;
    }

    if(length == d){
        swap(&c, &a);
        swap(&d, &b);
    }
    if(length == f){
        swap(&e, &a);
        swap(&f, &b);
    }

    if(length == b){
        ll sa = length - a; // Space of a in the square  
        if(sa == c && sa == e || sa == c && sa == f || sa == d && sa == e || sa == d && sa == f){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}