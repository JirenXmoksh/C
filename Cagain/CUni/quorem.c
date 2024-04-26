#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("Enter the dividend: ");
    scanf("%d", &a);
    
    printf("Enter the divisor: ");
    scanf("%d", &b);

    printf("The quotient when %d is divided by %d is: %d\n",a, b, a/b );
    printf("The remainder when %d is divided by %d is: %d",a, b, a%b );

    return 0;
}