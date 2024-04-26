#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nThe swapped values are ");
    
    int temp = a;
    a = b;
    b = temp;

    printf("%d and %d", a,b);
    return 0;
}