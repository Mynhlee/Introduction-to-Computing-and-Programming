#include <stdio.h>
int main(){
	int i, n, sum = 0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		int inp;
		scanf("%d", &inp);
		sum += inp;
	}
	
	printf("%.3lf", (1.0 * sum) / n);
}
