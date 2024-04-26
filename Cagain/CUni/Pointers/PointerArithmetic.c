#include<stdio.h>
int main(){

    // Addition / Subtraction of a number to a pointer

    // int a = 6, *ptr;
    // ptr = &a;
    // printf("%u\n", ptr);
    // ptr+=4;
    // printf("%u", ptr);

    // Subtraction of pointers

    // int arr[10] = {2,3,4,5,6,7,8,9,10,11};
    // int* ptr = &arr[0];
    // int* ptr2 = &arr[4];
    // printf("%d %u %u\n", ptr2 - ptr, ptr, ptr2);

    // Comparison of two pointers
    
    int arr[10] = {2,3,4,5,6,7,8,9,10,11};
    int* ptr = &arr[0];
    int* ptr2 = &arr[4];
    if(ptr2!=ptr) printf("Both point to different locations\n");
    else printf("Both point to the same location");

    // Addition of two pointers, multiplication or division of a number to a pointer are not possible.
    return 0;
}