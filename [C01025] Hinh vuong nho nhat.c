#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int min(int a, int b){
    return a < b ? a : b;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);

    int s = min(min(a, m), min(c, p));
    int t = min(min(b, n), min(d, q));
    int u = max(max(a, m), max(c, p));
    int v = max(max(b, n), max(d, q));

    int length = max(u - s, v - t);
    printf("%d", length * length);
}