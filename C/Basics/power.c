#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
    printf("Enter the base: ");
    scanf("%lf", &a);
    printf("Enter the exponent: ");
    scanf("%lf", &b);
    double power = pow(a,b);
    printf("%f", power);
    return 0;
}