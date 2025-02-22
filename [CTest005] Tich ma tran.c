#include <stdio.h>
int main(){
	int n, m, p;
	scanf("%d %d %d", &n, &m, &p);
	
	int i, j;
	int a[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++) scanf("%d", &a[i][j]);
	}
	
	int b[m][p];
	for(i=0; i<m; i++){
		for(j=0; j<p; j++) scanf("%d", &b[i][j]);
	}
	
	int k;
	int c[n][p];
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			c[i][j] = 0;
			for(k=0; k<m; k++) c[i][j] += a[i][k] * b[k][j];
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++) printf("%d ", c[i][j]);
		printf("\n");
	}
}
