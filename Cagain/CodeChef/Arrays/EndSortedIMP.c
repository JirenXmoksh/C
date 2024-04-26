#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the size of array: ");
        scanf("%d", &n);
        int arr[n];
        
        int oneposi = -1, nposi = -1;
        printf("Enter the elements: ");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            if(arr[i]==1) oneposi = i; // counts how many elements are before 1 (from the start)
            if(arr[i]==n) nposi = i; // counts how many elements are before n (from the start)
        }
        // stored the positions of '1' and 'n'
        
       
        int count;
        if(arr[0] == 1 && arr[n-1] == n) printf("\nMoves required to make the array End Sorted: 0\n\n");
       
        else{
            count = 0;
            count += oneposi;
            // to bring 1 to the start
            // counts how many elements are before 1
            // to count the elements before n (from the end)
            count += (n-1) - nposi;
            if (oneposi > nposi) count -= 1;
             // because when we were shifting 1 to the start, and 1 occured after 'n' in the array this means we must have increased the 'nposi' by 1, so we subtract it here
            printf("\nMoves required to make the array End Sorted: %d\n\n", count);
        }
        
    }
}

