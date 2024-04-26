#include <stdio.h>

// print YES if the given array can be broken into two sub-sequences such that SUM(s1) * SUM(s2) = ODD. Otherwise print NO.
int main(void) {

    // even x even = even (always)
    // even x odd = even (always)
    // odd x odd = odd
    
    // if any of the sums is even then print NO
    // if both the sums are odd then print YES
    
    // sum of two odd numbers is always even, so the sum of subsequences must be even i.e.: sumA must be even, if odd, print NO rightaway
    
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
        int sumA = 0;
        for(int i=0; i<n; i++){
            sumA+=arr[i];
        }
        if(sumA%2!=0) printf("NO\n"); // means an odd number cannot be obtained from two odd numbers which is the condition for our sub-sequences (they both must be odd)
        else {
            int oddcount = 0;
            int flag = 0;
            for(int i=0; i<n; i++){
                if(arr[i]%2!=0) oddcount++;
                if(oddcount>=1) {
                    flag = 1;
                    break;
                }
            }
            if(flag==1) printf("YES\n\n");
            else printf("NO\n\n");
        }
    }
}
// theoretically, its not possible that there is only one ODD element and the rest are even and the sum of array comes 
// out to be even (take any number of even numbers, add them and add only 1 odd number to them, the sum comes out to be 
// ODD EVERYTIME). Practically there must be atleast TWO ODD elements along with the condition that sum of array is even!

