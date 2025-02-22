#include <stdio.h>
#include <string.h>

int value(char x){
    if(x == 'I') return 1;
    if(x == 'V') return 5;
    if(x == 'X') return 10;
    if(x == 'L') return 50;
    if(x == 'C') return 100;
    if(x == 'D') return 500;
    if(x == 'M') return 1000;
    return 0;
}

void function(){
    char s[500];
    scanf("%s", s);

    int len = strlen(s);
    int sum = value(s[0]);

    for(int i=1; i<len; i++){
        if(value(s[i]) > value(s[i-1])) sum += value(s[i]) - 2 * value(s[i-1]);
        else sum += value(s[i]);
    }

    printf("%d", sum);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}