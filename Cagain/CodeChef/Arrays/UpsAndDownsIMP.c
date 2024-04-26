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
        printf("Enter the elements: ");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        // if(i%2==0): the element on 'i' should be less than or equal to both its neighbours
        // else: the element should be greater than or equal to both its neighbours
        
        for(int i=0; i<n-1; i++){
            if(i%2==0) {
                if(arr[i]>=arr[i+1]){
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            }
            else {
                if(arr[i]<=arr[i+1]) {
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        printf("The array sorted in the required condition: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }
}

