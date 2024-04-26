#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int tfrens, leftshoes;
        printf("Enter the total number of friends and left shoes already available as space seperated integers: ");
        scanf("%d %d", &tfrens, &leftshoes);
        if(leftshoes>=tfrens) printf("We will need minimum %d shoes to give pairs to all friends\n\n", tfrens);
        else{
            printf("We will need minimum %d shoes to give pairs to all friends\n\n", tfrens*2-leftshoes);
        }
    }
}

