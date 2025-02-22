#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

check(char s[]){
    int even = 0; // chan
    int odd = 0; // le

    for(int i=0; i<strlen(s); i++){
        if((s[i] - '0') % 2 == 0) even++;
        else odd++;
    }

    return (even < odd) ? true : false;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);
        
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
}