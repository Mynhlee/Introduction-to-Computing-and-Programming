#include <stdio.h>

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

void simplify(int *num, int *den){
    int g = gcd(*num, *den);
    *num /= g;
    *den /= g;
}

void function(){
    int pnum, pden, qnum, qden;
    scanf("%d %d %d %d", &pnum, &pden, &qnum, &qden);
    simplify(&pnum, &pden); simplify(&qnum, &qden);

    // Quy đồng p và q
    int lcm = (pden * qden / gcd(pden, qden));
    pnum *= lcm / pden;
    qnum *= lcm / qden;
    printf("%d/%d %d/%d\n", pnum, lcm, qnum, lcm);

    // Cộng hai phân số
    int sum_num = pnum + qnum;
    simplify(&sum_num, &lcm);
    printf("%d/%d\n", sum_num, lcm);

    // Thương hai phân số
    simplify(&pnum, &qnum);
    printf("%d/%d\n", pnum, qnum);
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        printf("Case #%d:\n", i);
        function();
    }
}