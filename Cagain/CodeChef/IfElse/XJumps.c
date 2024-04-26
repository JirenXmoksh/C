#include <stdio.h>

int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
	while(t--){
	    int destStair, stepsin1;
        printf("Enter the destination stair and steps you can move once: ");
	    scanf("%d %d", &destStair, &stepsin1);
	    if(destStair>stepsin1){
	        printf("You will need to make minimum of %d moves to climb to the stair no. %d\n\n", (destStair/stepsin1)+(destStair%stepsin1), destStair);
	    }
	    else if(destStair<stepsin1){
	        printf("You will need to make minimum of %d moves to climb to the stair no. %d\n\n", destStair, destStair);
	    }
	    else printf("You only need to move once\n");
	}

}

