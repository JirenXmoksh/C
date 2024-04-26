#include<stdio.h>
int main(){

    int n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the values: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("The array is: ");
    for(int i=0; i<n; i++) printf("%d ",  arr[i]);

    int ele;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&ele);
    
    int flag = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
            flag = 1;
            break;
        }
    }
    if(flag==1) printf("Yes, %d is available in the array", ele);
    else printf("No, %d is not available in the array", ele);

    return 0;
}