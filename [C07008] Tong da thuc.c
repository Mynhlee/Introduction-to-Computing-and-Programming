#include <stdio.h>
#include <string.h>

#define MAX 100001
#define MAX_LEN 1000

void import(char s[]){
    scanf("\n");
    fgets(s, MAX_LEN, stdin);
    s[strlen(s) - 1] = '\0';
}

int toNumber(char s[]){
    int res = 0;
    for(int i=0; i<strlen(s); i++) res = res * 10 + (s[i] - '0');
    return res;
}

int find(char s[], char x){
    for(int i=0; i<strlen(s); i++){
        if(x == s[i]) return i;
    }
    return -1;
}

void convert(char s[], int exp[]){
    char *token = strtok(s, " + ");
    while(token != NULL){
        char coef[20] = "", e[20] = "";
        int k = 0;

        for(int i=0; i<find(token, '*'); i++) coef[k++] = token[i];
        coef[k]= '\0';

        k = 0;
        for(int i=find(token, '^') + 1; i<strlen(token); i++) e[k++] = token[i];
        e[k] = '\0';

        exp[toNumber(e)] = toNumber(coef);
        token = strtok(NULL, " + ");
    }
}

void function(){
    char s[MAX_LEN], t[MAX_LEN];
    import(s); import(t);

    int exps[MAX], expt[MAX];
    memset(exps, 0, sizeof(exps));
    memset(expt, 0, sizeof(expt));

    convert(s, exps);
    convert(t, expt);

    for(int i=MAX; i>=0; i--){
        if(exps[i] != 0 || expt[i] != 0){
            if(i != 0) printf("%d*x^%d + ", exps[i] + expt[i], i);
            else printf("%d*x^%d", exps[i] + expt[i], i);
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}