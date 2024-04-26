#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int a,b,c;
        printf("Enter the three numbers to be compared: ");
        scanf("%d %d %d", &a, &b, &c);
        if(a>b){
            if(a<c) printf("%d is the second largest\n\n", a);
            // a>b and a>c, check between b and c
            else
            {
                if(b>c) printf("%d is the second largest\n\n", b);
                else printf("%d is the second largest\n\n", c);
            }
        }
        // a<b
        else 
        {
            if(a>c) printf("%d is the second largest\n\n", a);
            // a<b and a<c check between b and c
            else 
            {
                if(b<c) printf("%d is the second largest\n\n", b);
                // a<b but a>c and b>c check between a and c
                else 
                {
                 if(a>c) printf("%d is the second largest\n\n", a);
                 else printf("%d is the second largest\n\n", c);
                }
            }
        }
        
        
    }
}

