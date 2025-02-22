#include <stdio.h>
#include <string.h>
#define ll long long

int cut(char x){
    switch (x){
    case '0':
        return 0;
    case '1':
        return 1;
    case '8':
        return 0;
    case '9':
        return 0;
    default:
        return -1;
    }
}

ll value(char s[]){
    ll final = 0;

    for(int i=0; i<strlen(s); i++){
        if(cut(s[i]) == -1){
            final = -1;
            return final;
        }
        final = final * 10 + cut(s[i]);
    }
    return final;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[20];
        scanf("%s", s);

        if(value(s) == -1 || value(s) == 0) printf("INVALID\n");
        else printf("%lld\n", value(s));
    }
}