#include <stdio.h>
#define true 1
#define false 0

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
	int n, m;
	scanf("%d %d", &n, &m);
	
	int i, j;for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			int inp;
			scanf("%d", &inp);
			
			if(prime(inp)) printf("1 ");
			else printf("0 ");
		}
		
		printf("\n");
	}
}
