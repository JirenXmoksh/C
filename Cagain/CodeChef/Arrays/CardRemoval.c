#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the number of cards: ");
        scanf("%d", &n);
        int cards[n];
        printf("Enter the numbers on the cards: ");
        for(int i=0; i<n; i++){
            scanf("%d", &cards[i]);
        }
        // iterating to find the limits of x: min and max from the cards array.
        int max = -1;
        for(int i=0; i<n; i++){
            if(max<cards[i]) max = cards[i];
        }
        int min = 11;
        for(int i=0; i<n; i++){
            if(min>cards[i]) min = cards[i];
        }
        // now we have the min and max.
        //printf("%d %d\n", min, max);

        int mindiff = 100;
        for(int x=min; x<=max; x++){
            int remCount = 0;
            for(int i=0; i<n; i++){
                if(cards[i]!=x) remCount++;
            }
            if(mindiff>remCount) mindiff = remCount;
        }
        printf("Minimum of %d cards should be removed so that remaining card(s) are of the same number\n\n", mindiff);
    }
}

