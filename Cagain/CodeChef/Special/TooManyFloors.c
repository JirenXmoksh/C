#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
	while(t--){
	    int roomX, roomY, floorX, floorY;
        printf("Enter the numbers of first and second room as space seperated integers: ");
	    scanf("%d %d", &roomX, &roomY);
	    floorX = (roomX+9)/10;
	    floorY = (roomY+9)/10;
	    int floordiff = abs(floorX-floorY);
	    printf("One will need to move %d floors to reach from room %d to room %d\n", floordiff, roomX, roomY);
	}

}

