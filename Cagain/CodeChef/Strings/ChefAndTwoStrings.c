#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        char S1[100], S2[100];
        printf("Enter the first string: ");
        scanf("%s", S1);
        printf("Enter the second string: ");
        scanf("%s", S2);
        
        // minimal difference means that assume all question marks to be replaced with same letters in boths strings so we need to count the already different letters in both strings.
        // maximal difference means adding the count of already different letters to the number of question marks in both strings.
        
        int i = 0;
        int minDiff = 0;
        int diff = 0;
        while(S1[i]!='\0' && S2[i]!='\0'){
            if( (S1[i]!='?' && S2[i]!='?') && (S1[i]!=S2[i]) ) minDiff++;
            
            else if( (S1[i]=='?') || (S2[i]=='?') ) diff++;
            i++; 
        }
        printf("Minimal difference: %d, Maximal difference: %d\n\n", minDiff, minDiff+diff);
    }
}

