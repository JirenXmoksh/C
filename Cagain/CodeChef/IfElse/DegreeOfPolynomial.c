#include <stdio.h>

int main(void) {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the number of terms in the polynomial: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the coefficients: ");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int deg;
        for(int i=0; i<n; i++){
            if(arr[i]!=0) deg = i;
            else continue;
        }
        printf("Degree of the polynomial is: %d\n\n", deg);
    }

}

