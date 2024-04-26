#include <stdio.h>

int fact(int n);

int main(void) {
	
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int players;
        printf("Enter the number of players available: ");
        scanf("%d", &players);
        if(players<=1) printf("Invalid");
        else {
        
        // formula of nPr = n!/(n-r)!
        int slxn = fact(players)/fact(players-2);
        printf("There are %d ways to select a Captain and a Vice Captain from %d players\n\n", slxn, players);
        }
        
    }
}

int fact(int n){
    if(n==0 || n==1) return 1;
    else return n*fact(n-1);
}

