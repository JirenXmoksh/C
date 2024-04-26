#include <stdio.h>

int main(void) {
	int t;
	printf("Enter the number of test cases: ");
	scanf("%d", &t);
	while(t--){
	    int monthlyCharges, cost;
		printf("Enter the monthly charges and the total cost: ");
	    scanf("%d %d", &monthlyCharges, &cost);
	    if(cost%monthlyCharges==0) printf("%d\n", cost/monthlyCharges-1);
	    else  printf("%d\n",cost/monthlyCharges);
	}

}

