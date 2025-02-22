#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isRec(double a, double b, double c){
    return (a + b > c && a + c > b && b + c > a);
}

double Heron(double a, double b, double c){
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

void function(){
    double x[5], y[5];
    for(int i=1; i<=3; i++) scanf("%lf %lf", &x[i], &y[i]);

    double len[5];
    int k = 1;

    for(int i=1; i<=2; i++){
        for(int j=i+1; j<=3; j++){
            double dx = (x[i] - x[j]) * (x[i] - x[j]);
            double dy = (y[i] - y[j]) * (y[i] - y[j]);
            len[k++] = sqrt(dx + dy);
        }
    }
    
    if(!isRec(len[1], len[2], len[3])) printf("INVALID");
    else printf("%.2lf", Heron(len[1], len[2], len[3]));
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}