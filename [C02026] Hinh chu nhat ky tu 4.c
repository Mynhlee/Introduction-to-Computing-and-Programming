#include <stdio.h>
#include <string.h>

void change(char s[]){
    int len = strlen(s);
    int k = 0;
    
    char ss[len];
    ss[0] = s[0] - 1;

    for(int i=1; i<len; i++) ss[i] = s[k++];
    ss[len] = '\0';
    strcpy(s, ss);
}

int main(){
    int row, column;
    scanf("%d %d", &row, &column);

    char alpha[column];
    memset(alpha, column + 64, sizeof(alpha));
    
    if(row >= column){
        for(int i=1; i<=row; i++){
            printf("%s\n", alpha);
            if(row - i + 1 <= column) change(alpha);
        }
    }
    else{
        for(int i=1; i<=column-row; i++) change(alpha);
        for(int i=1; i<=row; i++){
            printf("%s\n", alpha);
            if(row - i + 1 <= column) change(alpha);
        }
    }
}