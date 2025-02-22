#include <stdio.h>
#include <math.h>
#include <string.h>

void move(char s[]){
    int len = strlen(s);
    char first = s[0];

    memmove(s, s+1, len-1);
    s[len-1] = '\0';

    int pos;
    for(int i=0; i<len-1; i++){
        if(s[i] > first && first > s[i+1]){
            pos = i + 1;
            break;
        }
    }

    memmove(s+pos+1, s+pos, len-pos-1);
    s[pos] = first;
    s[len] = '\0';
}

int main(){
    int row, column;
    scanf("%d %d", &row, &column);

    char value[11];
    for(int i=0; i<column; i++) value[i] = (i + 1) + '0';
    value[column] = '\0';

    for(int i=1; i<=row; i++){
        printf("%s\n", value);

        if(value[0] - '0' + 1 <= column) move(value);
        else value[0] = ((value[0] - '0') + 1) + '0';
    }
    
}