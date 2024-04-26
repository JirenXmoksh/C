#include <stdio.h>

int main(void) {
	// your code goes here
    int t;   
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int prize;
        printf("Enter the prize money: ");
        scanf("%d", &prize);
        int Carlsen = 0;
        int Chef = 0;
        char str[14];
        printf("Enter the win sequence of the 14 matches: ");
        scanf("%s", str);
        for(int i=0; i<14; i++){
            if(str[i]=='C') Carlsen+=2;
            else if(str[i]=='N') Chef+=2;
            else if(str[i]=='D') {
                Carlsen++;
                Chef++;
            }
        }
       //printf("%d %d\n", Carlsen, Chef);
         if(Carlsen>Chef) printf("Carlsen will receive %d rupees\n\n", 60*prize);
         else if(Carlsen<Chef) printf("Carlsen will receive %d rupees\n\n", 40*prize);
         else printf("Carlsen will receive %d rupees\n\n", 55*prize);
    }
}
// isn't working here :( but worked in the online compiler
