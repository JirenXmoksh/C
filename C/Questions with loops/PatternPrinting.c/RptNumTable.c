#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int a = n;
    int m = n;
    for( int i=1; i<=n+1; i++){ //This is for the upper row
        printf("%d ", i);
    }
    for(int i=n; i>=1; i--){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=1; i<=m; i++){
    int b = n;
    for(int j=1; j<=a; j++){
        printf("%d ", j);
    } a--;
    for(int k=1; k<=2*i-1; k++){
        printf("  ");
    }for( int l=1; l<=n; l++){
        printf("%d ", b);
       b--;
    } n--;
    printf("\n");
 }
 
 
    return 0;
}