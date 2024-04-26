


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows we want in the triangle: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ 
     for(int j=1; j<=(n-i); j++){//because i+j=n for every space in a line
             printf("  ");
    }for(int k=1; k<=n; k++){
        printf("* ");

    }
    printf("\n");
    }
    
    return 0;
}