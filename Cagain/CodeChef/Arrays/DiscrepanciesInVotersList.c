#include <stdio.h>
#include<limits.h>

int main(void) {
	// your code goes here
    
        int N1, N2, N3;
        printf("\nEnter the sizes of first, second and third voter's list: ");
        scanf("%d %d %d", &N1, &N2, &N3);
        
        int n = N1+N2+N3;
        int arr[n];
        printf("Enter the voter IDs: \n");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        // for(int i=0; i<n; i++){
        //     printf("%d ", arr[i]);
        // }
        // printf("\n");
        int max = INT_MIN;
        for(int i=0; i<n; i++){
            if(max<arr[i]) max = arr[i];
        }
        //printf("%d\n", max);
        int temp[max+1];
        for(int i=0; i<max+1; i++){
            temp[i] = 0;
        }
        for(int i=0; i<n; i++){
            temp[arr[i]]++;
        }
        // for(int i=0; i<max+1; i++){
        //   printf("%d ", temp[i]);
        // }
        
        //  we created the frequency array, now we have to print the count of elements which occur more than once in our frequency array.
        
        int counter = 0;
        for(int i=0; i<max+1; i++){
            if(temp[i]>1){
                counter++;
            }
        }
        printf("\n%d voter IDs are valid and are as follows: \n", counter);
        
        for(int i=0; i<max+1; i++){
            if(temp[i]>1){
                printf("%d ", i);
            }
        }
    
}
