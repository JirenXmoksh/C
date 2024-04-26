#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int dragon[3];
        int sloth[3];
        printf("Enter the marks of DSA, TOC and DM for dragon: ");
        for(int i=0; i<3; i++){
            scanf("%d", &dragon[i]);
        }
        printf("Enter the marks of DSA, TOC and DM for sloth: ");
        for(int i=0; i<3; i++){
            scanf("%d", &sloth[i]);
        }
        int dragtotal = 0, slototal = 0;
        for(int i=0; i<3; i++){
            dragtotal+=dragon[i];
        }
        for(int i=0; i<3; i++){
            slototal+=sloth[i];
        }
        
        if(dragtotal==slototal){
            
            if(dragon[0]==sloth[0]){
                if(dragon[1]==sloth[1]) printf("\nThere's a Tie\n\n");
                else if(dragon[1]>sloth[1]) printf("\nDragon got a lower rank!\n\n");
                else printf("\nSloth got a lower rank!\n\n");
            }
            
            else if(dragon[0]>sloth[0]) printf("\nDragon got a lower rank!\n\n");
            else printf("\nSloth got a lower rank!\n\n");
            
        }
        else if(dragtotal>slototal) printf("\nDragon got a lower rank!\n\n");
        else printf("\nSloth got a lower rank!\n\n");
    }
}

