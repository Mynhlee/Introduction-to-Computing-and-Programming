#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);

        int countodd = 0; // le
        int counteven = 0; // chan

        while(n > 0){
            switch ((n % 10) % 2){
            case 0:
                counteven++;
                break;
            case 1:
                countodd++;
                break;
            }
            n /= 10;
        }
        printf("%d %d\n", countodd, counteven);
    }
}