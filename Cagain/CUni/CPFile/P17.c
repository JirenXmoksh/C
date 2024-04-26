// PRACTICAL 17
// Write a program to swap two variables using the concept of call by 
// value and call by reference. 
#include <stdio.h>

void valSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void refSwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping:\nnum1 = %d\nnum2 = %d\n\n", num1, num2);

    // Swap using call by value
    valSwap(num1, num2);
    printf("After swapping by value:\nnum1 = %d\nnum2 = %d\n\n", num1, num2);

    // Swap using call by reference
    refSwap(&num1, &num2);
    printf("After swapping by reference:\nnum1 = %d\nnum2 = %d\n\n", num1, num2);

    return 0;
}