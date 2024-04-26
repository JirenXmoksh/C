#include <stdio.h>

int main() {
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while (t--) {
        int n;
        printf("Enter the number of posts: ");
        scanf("%d", &n);
        int arr[n], brr[n];
        printf("Enter the number of likes on respective posts: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Enter the number of comments on respective posts: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &brr[i]);
        }
        int max = -1;
        int maxidx;
        for(int i=0; i<n; i++){
            if(max<arr[i]) {
                max = arr[i];
                maxidx = i;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i] == max && brr[i]>brr[maxidx]){
               maxidx = i;
            }
        }
        printf("Post no. %d is the most popular among all\n\n", maxidx+1);
    }
    return 0;
}
