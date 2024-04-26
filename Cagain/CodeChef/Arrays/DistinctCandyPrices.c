#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the number of cities: ");
        scanf("%d", &n);
        int arr[2*n];
        printf("Enter the prices of candies: ");
        for(int i=0; i<2*n; i++){
            scanf("%d", &arr[i]);
        }
        int c;
        for(int i=0; i<2*n; i++){
            int dupliCounter = 1;
            c = 0;
            for(int j=i+1; j<2*n; j++){
                if(arr[i]==arr[j]) dupliCounter++;
                if(dupliCounter>2) {
                    c = 1;
                    break;
                }
            }
            if(c==1) break;
        }
        if(c==1) printf("No, the prices of candies are not valid\n\n");
        else printf("Yes, the prices of candies are valid\n\n");
    }
}

