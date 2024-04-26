#include <stdio.h>

int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
	while(t--){
	    int candies, frens, ecandy;
        printf("Enter the total number of candies and total friends: ");
	    scanf("%d %d", &candies, &frens);
	    ecandy = candies/frens;
	    if(candies%frens==0){
	        if(ecandy%2==0) printf("Yes, the candies can be distributed in such a way that each friend gets even number of canidies\n\n");
	        else printf("No the candies cannot be distributed in a way such that each friend gets even number of candies\n\n");
	    }
	    else printf("No the candies cannot be distributed in a way such that each friend gets even number of candies\n\n");
	   
	}

}

