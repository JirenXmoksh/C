#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
   
    for(int i=1; i<=n; i++){
     for(int j=1; j<=n-i; j++){//In the right handed triangle, we create two for loops.
    //i+j=n where spaces are present, so j = n-i.
    printf("  ");
    }
     for(int k=1; k<=i; k++){
     printf("* ");
    }printf("\n");  
    }
    
   return 0;
}