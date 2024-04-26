#include<stdio.h>
int main(){

    float a,b;
    printf("Enter the length of rectangle: ");
    scanf("%f", &a);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    printf("The area of the rectangle is %f units\n", a*b);
    printf("The perimeter of the rectangle is %f units", 2*(a+b));
    
    return 0;
}