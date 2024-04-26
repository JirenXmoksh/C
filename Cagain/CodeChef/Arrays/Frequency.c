#include <stdio.h>

int main(void) {

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
        printf("\nThe frequency of elements till %d is: ", max);
        for(int i=0; i<max+1; i++){
            printf("\n%d : %d",i, freq[i]);
        }
        //frequency array created!
        printf("\n");
        
    }
}

