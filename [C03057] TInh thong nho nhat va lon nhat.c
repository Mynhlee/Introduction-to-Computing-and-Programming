#include <stdio.h>
#include <string.h>

#define ll long long

void change(char s[], int x){
    if(x == 5){
        for(int i=0; i<strlen(s); i++){
            if(s[i] == '6') s[i] = '5';
        }
    }

    if(x == 6){
        for(int i=0; i<strlen(s); i++){
            if(s[i] == '5') s[i] = '6';
        }
    }
}

ll toNumber(char s[]){
    ll num = 0;
    for(int i=0; i<strlen(s); i++){
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char x1[18], x2[18];
        scanf("%s %s", x1, x2);

        change(x1, 5);
        change(x2, 5);

        ll y1 = toNumber(x1);
        ll y2 = toNumber(x2);

        printf("%lld ", y1 + y2);

        change(x1, 6);
        change(x2, 6);

        y1 = toNumber(x1);
        y2 = toNumber(x2);

        printf("%lld\n", y1 + y2);
    }
}