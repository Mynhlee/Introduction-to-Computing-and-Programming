#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRound(char raw[], int stat_raw[]){
    int lim = strlen(raw);
    
    for(int i=2; i<=lim; i++){
        int stat_prod[11];
        memset(stat_prod, 0, sizeof(stat_prod));

        int carry = 0;
        for(int j=strlen(raw) - 1; j>=0; j--){
            int sum = (raw[j] - '0') * i + carry;
            stat_prod[sum % 10]++;
            carry = sum / 10;
        }

        if(carry > 0) stat_prod[carry]++;

        for(int j=0; j<=9; j++){
            if(stat_raw[j] != stat_prod[j]) return false;
        }
    }
    return true;
}

void function(){
    char raw[66];
    scanf("%s", raw);

    int stat[11];
    memset(stat, 0, sizeof(stat));
    for(int i=0; i<strlen(raw); i++) stat[raw[i] - '0']++;

    if(isRound(raw, stat)) printf("YES");
    else printf("NO");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}