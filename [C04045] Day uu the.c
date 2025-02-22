#include <stdio.h>
#include <string.h>

int toNumber(char s[]){
    int len = strlen(s);
    int value = 0;

    for(int i=0; i<len; i++) value = value * 10 + (s[i] - '0');
    return value;
}

void function(){
    char s[1000];
    scanf("\n");
    fgets(s, 1000, stdin);
    s[strlen(s) - 1] = '\0';

    char *token = strtok(s, " ");
    int odd = 0, even = 0, count = 0;
    
    while(token != NULL){
        int value = toNumber(token);

        if(value % 2 == 0) even++;
        else odd++;
        count++;

        token = strtok(NULL, " ");
    }

    if((count%2==0 && even>odd) || (count%2==1 && odd>even)) printf("YES");
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