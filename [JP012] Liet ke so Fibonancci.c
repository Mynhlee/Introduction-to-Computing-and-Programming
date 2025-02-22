#include <stdio.h>
#define ll long long

ll Fib[100];

void CreateFib(){
	Fib[0] = 0;
	Fib[1] = 1;
	
	int i;
	for(i=2; i<93; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int main(){
	CreateFib();
	int t;
	scanf("%d", &t);
	
	while(t--){
		int i, a, b;
		scanf("%d %d", &a, &b);
		
		for(i=a; i<=b; i++) printf("%lld ", Fib[i]);
		printf("\n");
	}
}
