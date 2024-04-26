//PRACTICAL-4

// Write a Program to perform addition, subtraction, division and
// multiplication of two numbers given as input by the user.

#include<stdio.h>
int main(){
    float num1, num2;
    printf("Enter two numbers as space seperated inputs: "); // prompting the user to input the numbers
    scanf("%f %f", &num1, &num2); // taking input from the user
    printf("Sum: %f\n",num1+num2); // displaying the sum
    printf("Difference: %f\n",num1-num2); // displaying the difference
    printf("Quotient: %f\n",num1/num2); // displaying the division
    printf("Product: %f\n",num1*num2); // displaying the multiplication

    return 0;
}