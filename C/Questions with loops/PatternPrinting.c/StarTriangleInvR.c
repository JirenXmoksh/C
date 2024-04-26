#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows we want in the triangle: ");
    scanf("%d", &n);
    
    int nsp = 0;
    int nst = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
            }
            for(int k=1; k<=nst; k++){
                printf("* ");
            }nst--;
            nsp++; 
            printf("\n");
        }
    }
