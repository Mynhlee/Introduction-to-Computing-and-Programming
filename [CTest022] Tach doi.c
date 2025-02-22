#include <stdio.h>
#include <string.h>
#define ll long long

ll strtonum(char s[]){
	int len = strlen(s);
	int i;
	ll n = 0;
	
	for(i=0; i<len; i++) n = n * 10 + (s[i] - '0');
	return n;
}

ll gcd(ll a, ll b){
	return (b == 0) ? a : gcd(b, a%b);
}

void function(char s[]){
	int lens = strlen(s);
	char a[lens/2], b[lens/2];
	
	strncpy(a, s, lens/2);
	strncpy(b, s + lens/2, lens/2);
	
	a[lens/2] = '\0';
	b[lens/2] = '\0';
	
	ll x = strtonum(a);
	ll y = strtonum(b);
	
	printf("%lld\n", (x*y) / gcd(x, y));
}

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		char s[20];
		scanf("%s", s);
		
		if(strlen(s) % 2 != 0) printf("INVALID\n");
		else function(s);
	}
}
