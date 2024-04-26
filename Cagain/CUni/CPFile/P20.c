// PRACTICAL 20
// Write a program to show the use of passing pointer as arguments to 
// the functions. 

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("\nBefore swapping:\nnum1 = %d\nnum2 = %d\n\n", num1, num2);

    swap(&num1, &num2);
    printf("After swapping:\nnum1 = %d\nnum2 = %d\n\n", num1, num2);

    return 0;
}