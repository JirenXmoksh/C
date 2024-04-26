//PRACTICAL-3

// Write a program to calculate the area and the circumference of a
// circle by using radius as the input provided by the user.

#include<stdio.h>
int main(){
    float rad;
    printf("Enter the radius: "); // prompting the user to input the radius
    scanf("%f", &rad); // taking input from the user
    printf("Area of the circle with radius %.3f is: %.3f (sq. units)\n", rad, 3.14*rad*rad); // displaying the area
    printf("Circumference is %.3f (units)", 2*3.14*rad); // displaying the circumference
    return 0;
}