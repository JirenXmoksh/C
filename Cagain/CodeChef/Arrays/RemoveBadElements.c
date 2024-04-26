#include <stdio.h>
// same concept as the CardRemoval.c
int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        printf("Enter the elements: ");
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        // we have to delete all the other elements which are not equal to the element which occured maximum times.
        int max = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>max) max = arr[i];
        }
       // printf("%d\n", max);
        
        // create a frequency array 
        
        int freq[max+1];
        for(int i=0; i<max+1; i++){
            freq[i] = 0;
        }
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        // for(int i=0; i<max+1; i++){
        //     printf("%d ", freq[i]);
        // }
        
        // frequency array created!
        // printf("\n");
        
        // now find the maximum frequency
        int maxfreq = -1;
        for(int i=0; i<max+1; i++){
            if(maxfreq<freq[i]) maxfreq = freq[i];
        }
        printf("Minimum of %d elements should be removed such that the remaining elements are same\n\n", n-maxfreq);
        
    }
}

