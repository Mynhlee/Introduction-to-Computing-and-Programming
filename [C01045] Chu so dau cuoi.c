#include <stdio.h>
#include <string.h>

int main(){
    char s[11];
    scanf("%s", s);
    printf("%c %c", s[0], s[strlen(s)-1]);
}