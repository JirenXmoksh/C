#include<stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("The swapped values of a and b are %d and %d respectively ", a, b);
    return 0;
}