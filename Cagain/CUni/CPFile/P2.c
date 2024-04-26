//PRACTICAL-2

// Write a program to add two numbers and display the sum.

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers as space seperated inputs: "); // prompting the user to input the numbers
    scanf("%d %d", &num1, &num2); // taking input from the user
    printf("Sum of %d and %d is: %d", num1,num2,num1+num2); // displaying the sum
    return 0;
}