#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[4] = {3,4,1,2};
    int n = 4;
    int minNum1 = 0;
    int minNum2 = 0;
    // Displaying the array
     printf("The unsorted array is: ");
            for(int i=0; i<n; i++){
                printf("%d ", arr[i]);
                }
    // Step 1 Sorting the array
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j]; 
                arr[j] =arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }printf("\n");
        if(flag == true) break;
        }// Output
        printf("The sorted array is: "); 
         for(int i=0; i<n; i++){
                printf("%d ", arr[i]);
                }
            printf("\n");  
      // Forming the first number
       for(int i=0; i<n; i++){
        minNum1 = minNum1*10 + arr[i];
       } printf("\n");
       // Displaying the first number
       printf("The first minimum number is: %d", minNum1);
        printf("\n");
        //For the second minimum number
        
        if(arr[n-1]!=arr[n-2]){
            int temp = arr[n-1];
            arr[n-1]=arr[n-2];
            arr[n-2]=temp;
        }
         else if(arr[n-1]==arr[n-2]){
            int temp = arr[n-2];
            arr[n-2]=arr[n-3];
            arr[n-3]=temp;
        }
        
         else if(arr[n-2]==arr[n-3] && arr[n-1]==arr[n-2]){
            int temp = arr[n-3];
            arr[n-3]=arr[n-4];
            arr[n-4]=temp;
        }
        
        for(int i=0; i<n; i++){
            minNum2 = minNum2*10 + arr[i];
        }
        //Printing the second minimum number
        printf("The second minimum number is: %d", minNum2);
        printf("\n");
        // Now add the numbers for our answer!
        printf("The required minimum sum from the numbers formed from the digits of the array is: %d", minNum1+minNum2);
    
    
    

    return 0;
}