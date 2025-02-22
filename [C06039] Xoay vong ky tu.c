#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Rev(char s[]){
    int len = strlen(s);
    char first = s[0];
    
    for(int i=0; i<len-1; i++) s[i] = s[i+1];
    s[len - 1] = first;
    s[len] = '\0';
}

int CountStep(char raw[], char s[]){
    char temp[55];
    strcpy(temp, s);

    int count = 0;
    int len = strlen(s);

    while(count <= len){
        if(strcmp(raw, temp) == 0) return count;
        else{
            Rev(temp);
            count++;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    char str[n][50];
    for(int i=0; i<n; i++) scanf("%s", str[i]);

    int step[n];
    memset(step, 0, sizeof(step));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int count = CountStep(str[j], str[i]);

            if(count == -1){
                printf("-1");
                return 0;
            }
            else step[j] += count;
        }
    }

    int min = __INT_MAX__;
    for(int i=0; i<n; i++) min = (step[i] < min) ? step[i] : min;
    printf("%d", min);
}