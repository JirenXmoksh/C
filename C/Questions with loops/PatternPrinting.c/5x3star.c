#include<stdio.h>
int main(){
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    for(int i=1; i<=3; i++){//outer loop signifies the number of lines(rows).
       for(int i=1; i<=5; i++){// inner loop signifies the number of iterations per line(columns).
        printf("*"); //we put this loop in another loop.
    }printf("\n");
    }
    
    return 0;
}