// PRACTICAL 15
// Write a program to check that the given number is prime, Armstrong 
// or perfect using the concept of functions

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    
    originalNum = num;
    
    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }
    
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int isPerfect(int num) {
    int sum = 0;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}