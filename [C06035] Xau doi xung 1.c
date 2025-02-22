#include <stdio.h>
#include <string.h>

void function(){
    char s[20];
    scanf("%s", s);

    int count = 0;
    int i=0, j=strlen(s)-1;

    while(i <= j){
        if(i == j && count == 0) count = 1;
        if(s[i] != s[j]) count++;

        i++; j--;
    }

    if(count == 1) printf("YES");
    else printf("NO");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}