#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int a,b,x;
        printf("Enter the first, second number and the increment/decrement value: ");
        scanf("%d %d %d", &a, &b, &x);
        if(a==b) printf("YES, %d and %d can be equalized\n\n",a,b);
        else {
           if(abs(a-b)%(2*x)==0) printf("YES, %d and %d can be equalized\n\n",a,b);
           else printf("NO, %d and %d cannot be equalized\n\n",a,b);
        }
    }
}


