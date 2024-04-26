#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int sticklength, partlength;
        printf("Enter the initial length of stick and the length of the smaller part which we want to obtain: ");
        scanf("%d %d", &sticklength, &partlength);
        
        // stick of given length is to be broken into smaller sticks of input length having same parity.
        if(sticklength%2!=0 && partlength%2!=0) printf("Yes\n\n");
        else if(sticklength%2!=0 && partlength%2==0) printf("No\n\n");
        else if(sticklength%2==0 && partlength%2==0) printf("Yes\n\n");
        else if(sticklength%2==0 && partlength%2!=0) printf("Yes\n\n");
        
        // sum of evens can never be odd but sum of odds can be even.
        
        
    }
}

