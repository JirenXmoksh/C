//PRACTICAL-1

// Write a Program to show the use to input (scanf)/output (printf)
// statements and block structure of C-program by highlighting the
// features of "stdio.h".

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: "); // prompting the user to input a number
    scanf("%d", &num); // taking input from the user
    printf("You entered %d", num); // displaying the number
    return 0;
}