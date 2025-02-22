#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);

    int type01 = 0; // ()
    int type02 = 0; // {}
    int type03 = 0; // []
    int type04 = 0; // '
    int type05 = 0; // "

    int i;
    for(i=0; i<strlen(s); i++){
        switch (s[i]){
        case '(':
            type01++;
            break;
        case ')':
            type01--;
            break;
        case '{':
            type02++;
            break;
        case '}':
            type02--;
            break;
        case '[':
            type03++;
            break;
        case ']':
            type03--;
            break;
        case 39:
            type04++;
            break;
        case 34:
            type05++;
            break;
        }
    }

    if(type01!=0 || type02!=0 || type03!=0 || type04%2!=0 || type05%2!=0) printf("0");
    else printf("1");
}
