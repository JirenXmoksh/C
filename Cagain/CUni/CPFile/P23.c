// PRACTICAL 26
// Write a program to find the factorial of a number by using the 
// concept of recursion. 

#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d! : %d",n, fact);
    return 0;
}
int factorial(int n){
    if(n==1 || n==0 ) return 1; // Base case
   int recAns = n*factorial(n-1);
    return recAns; // We have to create a 'base case' which would work as a stopper to the recursion
}