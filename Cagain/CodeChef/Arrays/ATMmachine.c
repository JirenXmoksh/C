#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int persons, balance;
        printf("Enter the number of persons and the total balance available: ");
        scanf("%d %d", &persons, &balance);
        int arr[persons];
        for(int i=0 ;i<persons; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<persons; i++){
            if(balance-arr[i]>=0) {
                balance-=arr[i];
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
}


