#include<stdio.h>
int summation(int a, int b);
int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
     printf("Enter second number: ");
    scanf("%d", &b);
    int sum = summation(a, b);
    printf("%d", sum);
    return   0;     
}
int summation(int a, int b){
    return a+b;
}