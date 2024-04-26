#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while (t--) {
        int n, pass;
        printf("Enter the total students and the students passed: ");
        scanf("%d %d", &n, &pass);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // your code goes here
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                if(arr[j]>(arr[i]-1)) count++;
            }
            if(count==pass) {
                printf("%d is the passing marks\n\n", arr[i]-1);
            }
        }
        
    }
    return 0;
}
