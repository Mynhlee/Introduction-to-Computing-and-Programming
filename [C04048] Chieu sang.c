#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int find_end(int map[], int size, int start, int step){
    while(1){
        bool flag = false;

        for(int i=start+1; i<=start+step; i++){
            if(map[i] == 0 && i <= size){
                flag = true;
                start = i;
                break;
            }
        }

        if(!flag) return start;
    }
}

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int map[n+1];
    memset(map, 0, sizeof(map));

    for(int i=1; i<=m; i++){
        int pos;
        scanf("%d", &pos);

        for(int j=pos-k; j<=pos+k; j++){
            if(1<=j && j<=n && map[j] != 1) map[j] = 1;
        }
    }

    bool flag = true;
    int count = 0;

    for(int i=1; i<=n; i++){
        if(map[i] == 0){
            flag = false;

            int start = i;
            int end = find_end(map, n, start, k);
            i = end;

            int light = (end - start + 1) / (2 * k + 1);
            if((end - start + 1) % (2 * k + 1) != 0) light++;

            count += light;
        }
    }

    if(flag){
        printf("0");
        return 0;
    }
    printf("%d", count);
}