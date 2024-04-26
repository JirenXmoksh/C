#include<stdio.h>
int main(){

    int base,exp;
    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter the exponent: ");
    scanf("%d",&exp);

    int power = 1;
    for(int i=1; i<=exp; i++){
        power = power*base;
    }

    printf("%d raised to power %d is %d",base,exp,power);
    return 0;
    
}