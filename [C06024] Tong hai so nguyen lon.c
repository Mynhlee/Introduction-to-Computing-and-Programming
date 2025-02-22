#include <stdio.h>
#include <string.h>

void balance(char s[], char t[]){
    if(strlen(s) == strlen(t)) return;

    if(strlen(s) < strlen(t)){
        char tmp[500];
        strcpy(tmp, s);
        strcpy(s, t);
        strcpy(t, tmp);
    }

    for(int i=strlen(t); i<strlen(s); i++) t[i] = '0';
    t[strlen(s)] = '\0';
}

void swap(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(char s[]){
    int len = strlen(s);
    for(int i=0; i<len/2; i++) swap(&s[i], &s[len-i-1]);
}

void add(char s[], char t[], char result[]){
    int rem = 0;
    int len = strlen(s);

    for(int i=0; i<len; i++){
        int sum = (s[i] - '0') + (t[i] - '0') + rem;
        result[i] = (sum % 10) + '0';
        rem = sum / 10;
    }

    if(rem != 0){
        result[len] = rem + '0';
        result[len+1] = '\0';
    }
    else result[len] = '\0';
}

void function(){
    char s[500], t[500];
    scanf("%s %s", s, t);

    reverse(s); reverse(t);
    balance(s, t);
    
    char result[500];
    for(int i=0; i<strlen(s); i++) result[i] = '0';
    result[strlen(s)] = '\0';

    add(s, t, result);
    reverse(result);
    printf("%s", result);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}