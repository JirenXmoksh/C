#include <stdio.h>

int main() {
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");

    while (t--) {
        int n, CouponPrice, Discount;
        printf("Enter the number of items, price of the discount coupon and the discount it avails: ");
        scanf("%d %d %d", &n, &CouponPrice, &Discount);
        int arr[n];

        printf("Enter the prices of items: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // Your code goes here
        int bill = 0;
        for(int i=0; i<n; i++){
            bill += arr[i];
        }
        int billWcoupon = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=Discount) arr[i] = 0;
            else arr[i] -= Discount;
        }
        // for (int i = 0; i < n; i++) {
        //     printf("%d ", arr[i]);
        // }
        for(int i=0; i<n; i++){
            billWcoupon += arr[i];
        }
        billWcoupon = billWcoupon + CouponPrice;
        //printf("%d %d\n", billWcoupon, bill);
        if(billWcoupon<bill)printf("It will be good if we apply the coupon\n\n");
        else printf("We should prefer not taking the coupon\n\n");
    }

    return 0;
}
