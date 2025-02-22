#include <stdio.h>
#include <string.h>

void DelTyp1(char s[], int pos, int size){
    int len = strlen(s);
    char ss[len];

    int start;
    for(int i=pos+size; i<len; i++){
        if(s[i] != ' '){
            start = i;
            break;
        }
    }

    int k = 0;
    for(int i=start; i<len; i++) ss[k++] = s[i];
    ss[k] = '\0';

    strcpy(s, ss);
}

void DelTyp2(char s[], int pos){
    s[pos] = '\0';
}

void DelTyp3(char s[], int pos, int size){
    int len = strlen(s);
    char ss[len];

    int k = 0;
    for(int i=0; i<pos; i++) ss[k++] = s[i];
    for(int i=pos+size; i<len; i++) ss[k++] = s[i];
    ss[k] = '\0';

    strcpy(s, ss);
}

int main(){
    char s1[100], s2[100];
    gets(s1);
    scanf("\n%s", s2);

    char *pos = strstr(s1, s2);
    while(0 <= pos-s1 && pos-s1 < strlen(s1)){
        if(pos - s1 == 0) DelTyp1(s1, pos - s1, strlen(s2));
        else if(pos - s1 >= strlen(s1) - strlen(s2)) DelTyp2(s1, pos - s1);
        else DelTyp3(s1, pos - s1, strlen(s2));

        pos = strstr(s1, s2);
    }

    char *token = strtok(s1, " ");
    while(token != NULL){
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
}