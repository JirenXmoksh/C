#include<stdio.h>
int main(){

    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    printf("The area of the circle is %f units\n", 3.14285714*r*r);
    printf("The circumference of the circle is %f units", 2*3.14*r);
    
    return 0;
}