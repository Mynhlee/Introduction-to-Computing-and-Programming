#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	if(n == 0){
		printf("0");
		return 0;
	}
	
	int bin[10] = {0};
	int k = 0;
	
	while(n > 0){
		bin[k++] = n % 2;
		n /= 2;
	}
	
	int i;
	for(i=k-1; i>=0; i--) printf("%d", bin[i]);
}
