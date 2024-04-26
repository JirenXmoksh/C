// PRACTICAL 13 a)
// Write a program to print the following pattern: 
   
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
 


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows we want in the triangle: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){//outer loop runs n times in total, and i times in each iteration.
    for(int j=1; j<=i; j++){//inner loop runs i times at a time.
        printf("* ");
    }printf("\n");
    }
    
    return 0;
}