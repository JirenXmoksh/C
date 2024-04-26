#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the number of people present: ");
        scanf("%d", &n);
        
        int arr[n];
        int max = -1;
        printf("Enter the group preference of every person: ");
        for(int i=1; i<=n; i++){
            scanf("%d", &arr[i]);
            if(max<arr[i]) max = arr[i];
        }
        
        //printf("%d\n", max);
        // create a count array of the size of the maximum element from the input array
        // use 1 based indexing because we want to count the occurences of natural numbers (not 0!).
        
        int countarr[max];
        
        for(int i=1; i<=max; i++){
            countarr[i] = 0;
        }
        // put zeroes as all elements first.
        
        for(int i=1; i<=n; i++){
            countarr[arr[i]]++;
        }
        // increment the value for every element in the input array.
        
        // for(int i=1; i<=max; i++){
        //     printf("%d ", countarr[i]);
        // }
        // correct
        
        // now check for every element in count array, if the number there is a multiple of its index.
        int flag = 1;
        for(int i=2; i<=max; i++){ // starting i from 2 because no matter how many times 1 occured, they will always be happy! (deep...)
            if(countarr[i]%i!=0) {
                flag = 0;
                break; 
            }
        }
        if(flag==0) printf("NO, all persons cannot be happy\n\n");
        else printf("YES, all persons can be happy\n\n");
        
    }
}

