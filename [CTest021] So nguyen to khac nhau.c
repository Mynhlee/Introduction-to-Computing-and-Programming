#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int cmp(const void *x, const void *y){
	return *(int *)x - *(int *)y;
}

prime(int n){
	if(n < 2) return false;
	if(n == 2) return true;
	
	int i;
	for(i=2; i*i<=n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		int n;
		scanf("%d", &n);
		
		int arr[n];
		int i, k = 0;
		
		for(i=1; i<=n; i++){
			int inp;
			scanf("%d", &inp);
			if(prime(inp)) arr[k++] = inp;
		}
		
		qsort(arr, k, sizeof(int), cmp);
		for(i=0; i<k; i++){
			if(arr[i] != arr[i-1] || i == 0) printf("%d ", arr[i]);
		}
		printf("\n");
	}
}
