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
    printf("\nEnter the position to be deleted: ");
    scanf("%d",&pos);
    pos--; // to match the zero indexing
    
    for(int i=pos; i<n; i++) arr[i] = arr[i+1]; 

    printf("\nThe array after performing the deletion: ");

    for(int i=0; i<n-1; i++) printf("%d ", arr[i]) ;
    

    return 0;
}