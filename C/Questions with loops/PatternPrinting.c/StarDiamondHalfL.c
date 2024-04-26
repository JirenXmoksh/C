#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nst = 1;
    for(int i=1; i<=2*n-1; i++){
     for(int j=1; j<=nst ;j++){
            printf("* ");
        }printf("\n");
        if(i<n) nst ++;
        if(i>=n) nst--;
    }
     
        
    return 0;
}