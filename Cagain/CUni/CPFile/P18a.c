// PRACTICAL 18
// Write a program to perform the following operations on 1D-Array: 
//  Insert 
//  Update 
//  Delete 
//  Display 
//  Search 

#include<stdio.h>
int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter the values: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("The array is: ");
    for(int i=0; i<n; i++) printf("%d ",  arr[i]);

    int ele, pos;
    printf("\nEnter the element to be inserted and the position where it is to be inserted: ");
    scanf("%d %d", &ele, &pos);
    pos--; // to match the zero indexing
    for(int i=n+1; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;

    printf("\nThe array after inserting the element: ");

    for(int i=0; i<=n; i++) printf("%d ", arr[i]) ;
    

    return 0;
}