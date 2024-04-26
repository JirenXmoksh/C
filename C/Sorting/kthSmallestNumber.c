#include<stdio.h>
#include<limits.h>
// Every pass of selection sort gives us the minimum number from the array.
int main(){
    int arr[7] ={10,1,4,2,9,6,5};
    int n=7;
    int k;
    printf("Enter the number of smallest number we want from the array: ");
    scanf("%d", &k);
    printf("The unsorted array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    // Selection sort
    for(int i=0; i<=k-1; i++){ // k-1 number of passes
        int min = INT_MAX; //Renewed for every element / pass
        int minidx = -1;
         for(int j=i; j<=n-1; j++){
           if(arr[j]<min){
            min = arr[j];
            minidx = j;
           }
         }
         //swap the min and first element of the unsorted part
         //swap minidx and i
         int temp = arr[minidx];
         arr[minidx] =arr[i]; // 'i' because the unsorted array started from 'i'
         arr[i] = temp;
    }

    printf("\n");
    printf("The required smallest number is: \n");
    printf("%d ", arr[k-1]);
   
    return 0;
}