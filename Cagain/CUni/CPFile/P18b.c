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

    int pos, ele;
    printf("\nEnter the position to be updated and the updation: ");
    scanf("%d %d",&pos, &ele);
    pos--; // to match the zero indexing
    
    arr[pos] = ele;

    printf("\nThe array after performing the updation: ");

    for(int i=0; i<n; i++) printf("%d ", arr[i]) ;
    

    return 0;
}