#include<stdio.h>
int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the values: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("The array is: ");
    for(int i=0; i<n; i++) printf("%d ",  arr[i]);

    int pos;
    printf("\nEnter the position to be displayed: ");
    scanf("%d",&pos);
    pos--; // to match the zero indexing
    
   printf("Element at the %d position is %d ",pos+1, arr[pos]);
    
    return 0;
}