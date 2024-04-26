#include<stdio.h>
int main(){
    int n;
    int a=1;
    
    printf("Enter the number of rows we want to obtain: ");
    scanf("%d", &n);
    int nsp = n-1;  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
        printf("  ");
        }nsp--;
        for(int k=1; k<=a; k++){
        printf("%d ", k);
        }a=a+2;
        printf("\n");
    }
    return 0;
}