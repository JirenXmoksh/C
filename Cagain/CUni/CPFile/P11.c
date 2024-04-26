//PRACTICAL 11
// Write the program to count the digits in a number and then print the 
// reverse of the number also. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    int countDigits = 0;
    int temp = n;
    while(temp != 0){
        countDigits++;
        temp = temp / 10;
    }

    int revS = 0;
    while(n != 0){
        int dig = n % 10;
        revS = revS * 10 + dig;
        n = n / 10;
    }

    printf("The number of digits is: %d\n", countDigits);
    printf("The reversed number is: %d\n", revS);
    
    return 0;
}