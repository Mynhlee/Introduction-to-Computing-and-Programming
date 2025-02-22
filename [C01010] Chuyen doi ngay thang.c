#include <stdio.h>
int main(){
    int day;
    scanf("%d", &day);

    printf("%d ", day/365);
    day -= (day/365) * 365;

    printf("%d ", day/7);
    day -= (day/7) * 7;

    printf("%d", day);
}