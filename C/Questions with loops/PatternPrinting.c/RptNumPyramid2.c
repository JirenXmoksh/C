#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n-1;
    int a;
    for(int i=1; i<=n; i++){
         a=i;
        for(int l=1; l<=nsp; l++) {
            printf("  ");
        }nsp--;
        for(int k=2; k<=i; k++){
            
            printf("%d ", a);
            a--;
        }//a--;
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }printf("\n");

    }
    return 0;
}