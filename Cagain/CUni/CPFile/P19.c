// PRACTICAL 19
// Write a program to calculate the sum of array elements by passing it 
// to a function. 

#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {-1, 20, 312, 94, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to calculate the sum
    int sum = calculateSum(arr, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}