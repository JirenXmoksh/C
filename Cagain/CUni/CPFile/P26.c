// PRACTICAL 26
// Write a program to display the sum of the digits of a number by using 
// the concept of recursion. 

#include<stdio.h>

int SoD(int n);

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    int ans = SoD(n);
    printf("The sum of digits of %d is %d",n, ans);
    return 0;
}

int SoD(int n){
    if(n==0) return 0;
    else return  n%10 + SoD(n/10);
}