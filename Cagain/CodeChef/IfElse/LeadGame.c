#include <stdio.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
    int n;
    printf("Enter the number of rounds: ");
    scanf("%d", &n);
    printf("\n");
    int lead = -1;
    int P1cum = 0;
    int P2cum = 0;
    int winner;
    while(n--){
        int P1, P2;
        printf("Enter the scores of Player 1 and Player 2: ");
        scanf("%d %d", &P1, &P2);
        
        P1cum += P1;
        P2cum += P2;
        
        if(P1cum>P2cum){
            if(lead<(P1cum-P2cum)){
                lead = P1cum-P2cum;
                winner = 1;
            }
        }
        else if(P2cum>P1cum){
            if(lead<(P2cum-P1cum)){
                lead = P2cum-P1cum;
                winner = 2;
            }
        }
    }
    printf("\nPlayer %d is the winner by a lead of %d points\n\n", winner, lead);
}

