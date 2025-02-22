#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SplitandAdd(char s[]){
	int lens = strlen(s);
	int lena = lens / 2;
	int lenb = lens - lena;
	
	char a[lena], b[lenb];
	
	strncpy(a, s, lena);
	strncpy(b, s + lena, lenb);
	
	int i;
	if(lens % 2 != 0){
		for(i=lena-1; i>=0; i--) a[i+1] = a[i];
		a[0] = '0';
		lena++;
	}
	
	a[lena] = '\0';
	b[lenb] = '\0';
	
	int lenc = (lena > lenb) ? lena : lenb;
	int r = 0;
	char c[lenc];
	
	for(i=lenc; i>=0; i--){
		int tmp = (a[i] - '0') + (b[i] - '0') + r;
		if(tmp > 9){
			c[i] = (tmp % 10) + '0';
			r = tmp / 10;
		}
		else{
			c[i] = tmp + '0';
			r = 0;
		}
	}
	
	if(r > 0){
		for(i=lenc-1; i>=0; i--) c[i+1] = c[i];
		c[0] = r + '0';
		lenc++;
	}
	c[lenc] = '\0';
	
	strcpy(s, c);
}

int main(){
	char s[200];
	scanf("%s", s);
	
	while(strlen(s) > 1){
		SplitandAdd(s);
		printf("%s\n", s);
	}
}