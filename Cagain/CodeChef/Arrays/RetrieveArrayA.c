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
        int B[n];
    
        printf("Enter the elements: ");
        for(int i=1; i<=n; i++){
            scanf("%d", &B[i]);
        }
        // for(int i=0; i<n; i++){
        //     printf("%d ", B[i]);
        // }
        // printf("\n");
        int sumB = 0;
        // calculate the sum of array B;
        for(int i=1; i<=n; i++){
            sumB+=B[i];
        }
        // printing the array A using the formula found.
        printf("\nOur original array A was: ");
        for(int i=1; i<=n; i++){
            printf("%d ", (B[i] - (sumB/(n+1))) );
        }
        printf("\n\n");
    }
}

