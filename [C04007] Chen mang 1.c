#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<m; i++) scanf("%d", &b[i]);

    int p;
    scanf("%d", &p);

    int c[n + m];
    int k = 0;

    for(int i=0; i<p; i++) c[k++] = a[i];
    for(int i=0; i<m; i++) c[k++] = b[i];
    for(int i=p; i<n; i++) c[k++] = a[i];
    for(int i=0; i<n+m; i++) printf("%d ", c[i]);
}