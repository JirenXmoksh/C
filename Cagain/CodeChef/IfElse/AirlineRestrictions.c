#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int Baga, Bagb, Bagc, CheckLim, CarryLim;
        printf("Enter the weights of bags followed by the check-in limit and the carry bag limit: ");
        scanf("%d %d %d %d %d", &Baga, &Bagb, &Bagc, &CheckLim, &CarryLim);
        
        // if( ((Baga+Bagb)<=CheckLim || (Baga+Bagc)<=CheckLim || (Bagc+Bagb)<=CheckLim ) && (Baga<=CarryLim || Bagb<=CarryLim || Bagc<=CarryLim) ) printf("Yes\n");
        
        // else printf("No\n");
        
        // Above logic was right to some extent but the approach was wrong
        
        if( ((Baga+Bagb<=CheckLim) && Bagc<=CarryLim) ||  ((Bagc+Bagb<=CheckLim) && Baga<=CarryLim) ||  ((Baga+Bagc<=CheckLim) && Bagb<=CarryLim)) printf("Yes, all three bags can be carried in the airline\n\n");
        else printf("No, all three bags cannot be carried in the airline\n\n");
    }
}

