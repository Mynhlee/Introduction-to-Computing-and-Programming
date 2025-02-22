#include <stdio.h>
#define true 1
#define false 0

int main(){
	int n;
	scanf("%d", &n);
	
	int i, j;
	int pos = 0;
	int flag = n;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j >= pos){
				printf("%d ", n - flag);
				flag--;
			}
			else printf("0 ");
		}
		
		pos++;
		flag = n;
		printf("\n");
	}
}
