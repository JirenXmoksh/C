#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=0;
    if(n%2==0){
        sum = -n/2;
    }else{
        sum= -n/2 + n;
    }
    
    printf("The sum of %d terms is: %d", n, sum);
    return 0;}
