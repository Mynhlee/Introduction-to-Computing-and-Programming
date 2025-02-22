#include <stdio.h>
#include <string.h>
#include <ctype.h>

void function(){
    char s[1000];
    scanf("%s", s);

    if(s[0] == '0'){
        printf("INVALID");
        return;
    }

    int len = strlen(s);
    int count = 0;
    int odd = 0, even = 0;

    for(int i=0; i<len; i++){
        if(!isdigit(s[i])){
            printf("INVALID");
            return;
        }

        count++;
        if((s[i] - '0') % 2 == 0) even++;
        else odd++;
    }

    if((count % 2 == 0 && even > odd) || (count % 2 != 0 && odd > even)) printf("YES");
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