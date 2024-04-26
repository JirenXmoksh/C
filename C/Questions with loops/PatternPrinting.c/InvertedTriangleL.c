#include<stdio.h>
int main(){
    int n;
    printf("Number: ");
    scanf("%d", &n);
    int m;
    m = n;
    for(int i=1; i<=n; i++){
    
        for(int j=1; j<=m; j++){
            printf("%d ", j);
           
        }m--;
        printf("\n");
    }
}