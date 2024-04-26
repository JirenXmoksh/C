#include<stdio.h>
#include<limits.h>

int main(){
    int arr[7] ={7,4,5,9,8,2,1};
    int n=7;
    printf("The unsorted array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    // Selection sort
    for(int i=0; i<n-1; i++){ // n-1 number of passes
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
    printf("The sorted array is: \n");
   for(int i=0; i<n-1; i++){
    printf("%d ", arr[i]);
   }
   
    return 0;
}






