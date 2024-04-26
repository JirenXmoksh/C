#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
    printf("\n");
	while(t--){
	    int timeA, timeB, Afirst, Blater, Bfirst, Alater, total1, total2;
        printf("Enter the time required for solving problem A and B respectively as space seperated integers: ");
	    scanf("%d %d", &timeA, &timeB); // -2 pts per min for A, -4 pts per min for B
	   
	    Afirst = 500 - (timeA*2);
	    Blater = 1000 - ((timeA+timeB)*4);
	    total1 = Afirst+Blater;
	    
	    Bfirst = 1000 - (timeB*4);
	    Alater = 500 - ((timeA+timeB)*2);
	    total2 = Bfirst + Alater;
	    
	    if(total1>=total2) printf("Maximum points the chef can score are: %d\n\n", total1);
	    else printf("Maximum points the chef can score are: %d\n\n", total2);
	    
	}

}

