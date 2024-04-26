// Swapping from the end till the element finds its position
// We assume that the zero index element / part of the array is sorted and therefore we 
// we start from the first index
// Then we compare the first index element with the 'sorted array' part
// if that first index element is smaller then they are swapped
#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    printf("The array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    // Insertion sort
    for(int i=1; i<n; i++){
        int j=i;
        while( j>0 && arr[j]<arr[j-1]){
            //swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    } printf("The sorted array is: \n");
     for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}