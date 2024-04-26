#include <stdio.h>

int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
	while(t--){
	    int sum;
        printf("Enter the amount: ");
	    scanf("%d", &sum);
        int tsum = sum;
	    if(sum%10==0 || sum%5==0){
	       int tencoins = 0;
	       int fivecoins = 0;
	       while(sum!=0){
	           if(sum%10==0){
	               tencoins++;
	               sum-=10;
	           }
	           else if(sum%5==0){
	               fivecoins++;
	               sum-=5;
	           }
	       }
	    //    printf("%d\n", fivecoins+tencoins);
        printf("We need %d 10/- coins and %d 5/- coins to denominate an amount of %d\n", tencoins, fivecoins, tsum);
	    }
	    else printf("%d rupees cannot be denominated in 5/- or 10/- coins\n", tsum);
	    
	    
	}

}

