#include<stdio.h>
int main(){

    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("ADDITION: %d\n", a+b);
    printf("DIFFERENCE: %d\n", a-b);
    printf("QUOTIENT: %d\n", a/b);
    printf("PRODUCT: %d\n", a*b);
   
    return 0;
}