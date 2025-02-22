#include <stdio.h>
#include <string.h>

char value[10];

void swap(char s[], int index){
    int len = strlen(s);
    char ss[len + 1];

    ss[0] = value[index];
    for(int i=1; i<len; i++) ss[i] = s[i-1];
    
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
    for(int i=0; i<column; i++) value[i] = (i + 1) + '0';

    char s[10];
    strcpy(s, value);
    int index = 1;

    for(int i=1; i<=row; i++){
        printf("%s\n", s);

        if(s[0] - '0' < column) swap(s, index++);
        else insert(s, i + 1);
    }
}