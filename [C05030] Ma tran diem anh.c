#include <stdio.h>
#include <string.h>
#define ll long long

void function(){
    int n, m;
    scanf("%d %d", &n, &m);

    char mat[n][1000];
    ll row1[n], col1[m], row2[n], col2[m];
    memset(row1, 0, sizeof(row1));
    memset(col1, 0, sizeof(col1));
    memset(row2, 0, sizeof(row2));
    memset(col2, 0, sizeof(col2));

    for(int i=0; i<n; i++){
        scanf("%s", mat[i]);
        
        for(int j=0; j<m; j++){
            if(mat[i][j] == '1'){
                row1[i]++;
                col1[j]++;
            }
            else if(mat[i][j] == '2'){
                row2[i]++;
                col2[j]++;
            }
        }
    }

    ll count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == '1') count += row2[i] * col2[j];
            else if(mat[i][j] == '2') count += row1[i] * col1[j];
        }
    }

    printf("%lld", count);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        function();
        printf("\n");
    }
}