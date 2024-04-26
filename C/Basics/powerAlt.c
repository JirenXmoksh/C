#include<stdio.h>
int main(){
    int a, b ;
    int power = 1;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);
    for(int i=1; i<=b; i++){
        power=power*a;

    }printf("%d raised to the power %d = %d",a,b,power);

    return 0;
}