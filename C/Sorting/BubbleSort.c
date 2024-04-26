#include<stdio.h>
#include<stdbool.h>

int main(){
    // We will use nested loops, outer loop for number of passes, and 
    //inner loop for swapping
   
    int arr[5]= {1,3,2,4,1};
    int n=5;
    printf("The array is: \n");
    for(int i=0; i<5;  i++){
        printf("%d ", arr[i]);
    }
    //Bubble sort
    for(int i=0; i<n-1; i++){ //Outer loop will run n-1 times maximum 
        bool flag = true; //True means array is sorted 
        for(int j=0; j<n-1-i; j++) {  //Inner loop till n-2 max
           if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            //Now check array after/before every pass if it is sorted or not.
            // we will do this with the help of 'flag'
           flag = false; // means the loop was run, so array is not sorted
           }
          
    } if(flag==true) break; //The loop didnt run, so finish it 
    }printf("\n");
    printf("The sorted array is: ");
    for(int i=0; i<5;  i++){
        printf("%d ", arr[i]);
    }
    return 0;
}