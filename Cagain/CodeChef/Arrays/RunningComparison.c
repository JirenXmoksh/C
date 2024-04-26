#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    
    while (t--) {
        int n;
        printf("Enter the number of days both ran: ");
        scanf("%d", &n);
        int arr[n], brr[n];
        printf("Enter alice's distance covered on each day: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Enter bob's distance covered on each day: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &brr[i]);
        }
        int count = 0;
        for(int i=0; i<n; i++){
            int Alice ;
            int Bob;
            
            if(brr[i] <= 2*arr[i]) Alice = 1;
            else Alice = 0;
            
            if(arr[i] <= 2*brr[i]) Bob = 1;
            else Bob = 0;
            
            if(Alice == 1 && Bob == 1) count++;
        }
        printf("\nAlice and Bob were happy on %d days\n\n", count);
    }
    

    return 0;
}
