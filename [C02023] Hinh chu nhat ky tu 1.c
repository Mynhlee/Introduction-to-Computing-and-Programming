#include <stdio.h>
#include <string.h>

char alphabet[27];
int number[27];

int main(){
    alphabet[0] = '0';
    for(int i=1; i<=26; i++) alphabet[i] = i + 96;
    memset(number, 0, sizeof(number));

    int row, column;
    scanf("%d %d", &row, &column);

    int start = (row > column) ? row : column;
    number [start] = column;

    for(int i=1; i<=row; i++){
        int index = start;
        int count = 1;

        while(count <= column){
            if(number[index] == 1){
                printf("%c", alphabet[index]);
                index--;
                count++;
            }
            else{
                for(int j=1; j<=number[index]; j++){
                    printf("%c", alphabet[index]);
                    count++;
                }

                number[index-1] = number[index] - 1;
                number[index] = 1; 
            }
        }
        printf("\n");
    }
}