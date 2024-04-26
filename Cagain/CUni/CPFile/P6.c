//PRACTICAL-6

// Write a program to swap two variable:
// a) By using temporary variable.
// b) Without using temporary variable

#include<stdio.h>
int main(){
    // a) By using temporary variable.
    int num1, num2, temp;
    printf("Enter the value of a: "); // prompting the user to input the number
    scanf("%d", &num1); // taking input from the user
    printf("Enter the value of b: "); // prompting the user to input the other number
    scanf("%d", &num2); // taking input from the user
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Values after swapping:\na = %d\nb = %d\n\n", num1, num2);

    // b) Without using temporary variable
    int Num1, Num2;
    printf("Enter the value of a: "); // prompting the user to input the number
    scanf("%d", &Num1); // taking input from the user
    printf("Enter the value of b: "); // prompting the user to input the other number
    scanf("%d", &Num2); // taking input from the user
    Num1 = Num1 + Num2;
    Num2 = Num1 - Num2;
    Num1 = Num1 - Num2;
    printf("Values after swapping:\na = %d\nb = %d", Num1, Num2);
    return 0;
}