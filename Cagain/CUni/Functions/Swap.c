#include <stdio.h>

// Function declaration to swap two numbers
int* swap(int a, int b);

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call the swap function and get the swapped values
    int* swapped = swap(num1, num2);
    
    // Update the values of num1 and num2 with the swapped values
    num1 = swapped[0];
    num2 = swapped[1];
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

// Function definition to swap two numbers
int* swap(int a, int b) {
    static int result[2]; // Static array to hold the swapped values
    
    result[0] = b; // Assign the value of b to index 0
    result[1] = a; // Assign the value of a to index 1
    
    return result; // Return the array containing swapped values
}
