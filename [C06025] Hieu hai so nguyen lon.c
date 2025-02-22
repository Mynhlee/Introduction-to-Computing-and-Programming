#include <stdio.h>
#include <string.h>

void balance(char s[], char t[]){
    if(strlen(s) == strlen(t)){
        if(strcmp(s, t) < 0){
            char tmp[500];
            strcpy(tmp, s);
            strcpy(s, t);
            strcpy(t, tmp);
        }
        return;
    }

    if(strlen(s) < strlen(t)){
        char tmp[500];
        strcpy(tmp, s);
        strcpy(s, t);
        strcpy(t, tmp);
    }

    char tmp[500] = "";
    for(int i=0; i<strlen(s) - strlen(t); i++) tmp[i] = '0';
    tmp[strlen(s) - strlen(t)] = '\0';

    strcat(tmp, t);
    strcpy(t, tmp);
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

void sub(char s[], char t[], char result[]){
    int rem = 0;
    int len = strlen(s);

    for(int i=0; i<len; i++){
        int sub = (s[i] - '0') - (t[i] - '0') - rem;
        if(sub < 0){
            sub += 10;
            rem = 1;
        }
        else rem = 0;

        result[i] = sub + '0';
    }

    int k = len - 1;
    while(result[k] == '0') k--;
    result[k + 1] = '\0';
}

void function(){
    char s[500], t[500];
    scanf("%s %s", s, t);

    balance(s, t);
    reverse(s); reverse(t);

    char result[500];
    for(int i=0; i<strlen(s); i++) result[i] = '0';
    result[strlen(s)] = '\0';

    sub(s, t, result);
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