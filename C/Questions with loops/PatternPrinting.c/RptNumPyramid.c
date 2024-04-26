#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp=n-1;
     for(int i=1; i<=n; i++){//first loop for spaces.
        for(int m=1; m<=nsp; m++){
            printf("  ");
        }nsp--;
        for(int j=1; j<=i; j++){//second for a normal number triangle.
        printf("%d ", j);
    }  
    int a=i-1;
       for(int k=2; k<=i; k++){//third for the extra numbers to be printed alongside the triangle.
        
        printf("%d ", a);
        a--;
}
    printf("\n");
     }
    return 0;

 }