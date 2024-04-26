#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int LVremng, Teach, breaktime;
        printf("Enter the number of remaining levels, time to complete each and the duration of break (which is after every 3 levels): ");
        scanf("%d %d %d", &LVremng, &Teach, &breaktime);
        if(LVremng<=3) printf("%d\n", LVremng*Teach);
        else {
            if(LVremng%3==0){
                printf("You will require %d minutes to complete %d levels\n\n", ( (LVremng*Teach)+(breaktime*(LVremng/3-1) ) ),LVremng );
            }
            else{
                printf("You will require %d minutes to complete %d levels\n\n", ( (LVremng*Teach)+(breaktime*(LVremng/3) ) ),LVremng );
            }
        }
    }
}

