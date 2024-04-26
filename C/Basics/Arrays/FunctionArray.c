// #include<stdio.h>
// void function(int x[]);
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n", arr[0]);
//     function(arr);
//     printf("%d", arr[0]);
//     return 0;
// }
// void function(int x[]){ // Arrays are passed by reference
// x[0]=10;
// return;
// }
#include<stdio.h>
void swap(int a[]);
int main(){
    int arr[2]={5,3};
    printf("Original array: \n");
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    swap(arr);
    printf("\n");
    printf("Swapped array: \n");
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    return 0;
}
void swap(int a[]){ // We successfully swapped two numbers without using pointers.
    int temp;
    temp = a[0];
    a[0]= a[1];
    a[1] = temp;
return;

}

