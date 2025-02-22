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

    char alpha[11];
    for(int i=0; i<column; i++) alpha[i] = i + 65;
    alpha[column] = '\0';

    for(int i=1; i<=row; i++){
        printf("%s\n", alpha);
        if(alpha[0] - 65 + 1 < column) move(alpha);
    }    
}