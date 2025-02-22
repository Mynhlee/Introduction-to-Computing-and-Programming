#include <stdio.h>
#include <stdlib.h>

int Com(const void *x, const void *y){
	return *(int *)x - *(int *)y;
}

int ComRev(const void *x, const void *y){
	return *(int *)y - *(int *)x;
}

void MergeTG(int m, int a[], int n, int b[], int c[], char x){
	int i, k = 0;
	for(i=0; i<m; i++) c[k++] = a[i];
	for(i=0; i<n; i++) c[k++] = b[i];
}

void MergeF(int m, int a[], int n, int b[], int c[]){
	int i = 0, j = 0, k = 0;
	
	while(i<m && j <n){
		c[k++] = a[i++];
		c[k++] = b[j++];
	}
	
	while(i < m) c[k++] = a[i++];
	while(j < n) c[k++] = b[j++];
}

void MergeA(int m, int a[], int n, int b[], int c[]){
	int i = 0, j = 0, k = 0;
	
	while(i<m && j <n){
		c[k++] = b[j++];
		c[k++] = a[i++];
	}
	
	while(i < m) c[k++] = a[i++];
	while(j < n) c[k++] = b[j++];
}

void Function(){
	int i, m, n;
	char x;
	scanf("%d %d %c", &m, &n, &x);
	
	int a[m], b[n], c[m+n];
	for(i=0; i<m; i++) scanf("%d", &a[i]);
	for(i=0; i<n; i++) scanf("%d", &b[i]);
	
	switch(x){
		case 'T':
			MergeTG(m, a, n, b, c, x);
			qsort(c, m+n, sizeof(int), Com);
			for(i=0; i<m+n; i++) printf("%d ", c[i]);
			break;
		case 'G':
			MergeTG(m, a, n, b, c, x);
			qsort(c, m+n, sizeof(int), ComRev);
			for(i=0; i<m+n; i++) printf("%d ", c[i]);
			break;
		case 'F':
			for(i=0; i<m; i++) printf("%d ", a[i]);
			for(i=0; i<n; i++) printf("%d ", b[i]);
			break;
		case 'A':
			for(i=0; i<n; i++) printf("%d ", b[i]);
			for(i=0; i<m; i++) printf("%d ", a[i]);
			break;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		Function();
		printf("\n");
	}
}
