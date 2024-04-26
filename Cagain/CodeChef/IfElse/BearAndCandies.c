#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int Limaklim, Boblim;
        printf("Enter the limit for Limak and limit for Bob: ");
        scanf("%d %d", &Limaklim, &Boblim);
        int totalLim = 0, totalBob = 0;
        for(int i=1; i<=(Limaklim+Boblim); i++){
            if(i%2!=0) totalLim+=i;
            else totalBob+=i;
            if(totalLim>Limaklim) {
                printf("Bob wins\n\n");
                break;
            }
            else if(totalBob>Boblim) {
                printf("Limak wins\n\n"); 
                break;
            }
            
        }
        
        
    }
}

