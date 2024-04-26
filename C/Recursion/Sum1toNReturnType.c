#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
    return 0;
}
int sum(int n){
    if(n==1) return 1;
    if(n==0)  return 0; // Base case
   int recAns = n+sum(n-1);
    return recAns; // We have to create a 'base case' which would work as a stopper to the recursion
}