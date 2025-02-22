#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

prime(char x){
    if(x=='2' || x=='3' || x=='5' || x=='7') return true;
    return false;
}

int main(){
    char s[20];
    scanf("%s", s);

    int array[4][2];
    memset(array, 0, sizeof(array));

    for(int i=0; i<strlen(s); i++){
        if(prime(s[i])){
            int value = s[i] - '0';
            int flag = false;

            for(int j=0; j<4; j++){
                if(array[j][0] == value){
                    array[j][1]++;
                    flag = true;
                    // break;
                }
            }

            if(!flag){
                for(int j=0; j<4; j++){
                    if(array[j][0] == 0){
                        array[j][0] = value;
                        array[j][1]++;
                        break;
                    }
                }
            }
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            if(array[i][j] == 0) return 0;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}