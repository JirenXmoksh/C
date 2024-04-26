#include<stdio.h>
 void swap(int* a, int* b); //'*'because we have to store addresses which are being passed from the main function.
 int main(){
    int a; 
    printf("Enter a: ");
    scanf("%d", &a);
    int b; 
    printf("Enter b: ");
    scanf("%d", &b);
    swap(&a, &b); // We are passing the addresses of a and b, so that direct change in original values can take place.
    printf("New value of a is : %d\n", a);
    printf("New value of b is : %d", b);
    
    return 0;
 }
 void swap(int* a, int*b){
   int temp = *a;
    *a = *b; //original values are being switched.
    *b = temp;
    return;
 }