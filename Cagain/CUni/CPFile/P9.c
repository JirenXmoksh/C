//PRACTICAL 9
// Write a program using while loop to 
// calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    int test = n;
    while(test!=0){
        sum+=test;
        test--;
    }
    printf("The sum of natural numbers till %d is %d", n, sum);

    return 0;
}