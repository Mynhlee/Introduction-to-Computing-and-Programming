#include <stdio.h>
#include <string.h>

char value[10];

void swap(char s[], int index){
    int len = strlen(s);
    char ss[len + 1];

    strcpy(ss, s);
    ss[len] = value[index - 1];

    memmove(ss, ss+1, len);
    ss[len] = '\0';

    strcpy(s, ss);
}

void insert(char s[], int num){
    int len = strlen(s);
    char ss[len];
    ss[0] = num + '0';
    
    for(int i=1; i<len; i++) ss[i] = s[i-1];
    ss[len] = '\0';

    strcpy(s, ss);
}

int main(){
    int row, column;
    scanf("%d %d", &row, &column);
    for(int i=0; i<column; i++) value[i] = (column - i) + '0';

    char s[10];
    strcpy(s, value);

    int index = column - 1;
    int start = row;

    for(int i=1; i<=row; i++){
        if(i <= row - column){
            for(int j=start; j>=(start-column+1); j--) printf("%d", j);
            start--;
            printf("\n");
        }

        else{
            printf("%s\n", s);
            swap(s, index--);
        }
    }
}