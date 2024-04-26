#include<stdio.h>
int main(){
    int arr[4];
    int prod=1;
    for(int i=0; i<=3;i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<=3;i++){
        prod*=arr[i];
    }
    printf("The product of all the elements of array is: %d", prod);
    return  0;
}