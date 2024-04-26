#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    //Taking inputs
    for(int i=0;i<n;i++){
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    //Displaying the array
    printf("The array is : ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    //Finding the first maximum
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max) smax = arr[i];
    }
    printf("The largest and the second largest numbers in the array are %d and %d respectively ", max,smax);

    return 0;
}