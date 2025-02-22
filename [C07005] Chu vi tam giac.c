#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isRec(double a, double b, double c){
    if(a+b>c && a+c>b && b+c>a) return true;
    return false;
}

void function(){
    double x[5], y[5];
    for(int i=1; i<=3; i++) scanf("%lf %lf", &x[i], &y[i]);

    double len[5];
    int k = 1;

    for(int i=1; i<=2; i++){
        for(int j=i+1; j<=3; j++){
            double dx = powl(x[i] - x[j], 2.0);
            double dy = powl(y[i] - y[j], 2.0);
            len[k++] = sqrt(dx + dy);
        }
    }
    
    if(isRec(len[1], len[2], len[3])) printf("%.3lf", len[1]+len[2]+len[3]);
    else printf("INVALID");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}