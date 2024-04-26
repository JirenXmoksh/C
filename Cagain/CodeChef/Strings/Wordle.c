#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        char S[5];
        char T[5];
        char ans[5];
        printf("Enter the hidden word string: ");
        scanf("%s", S);
        printf("Enter the guess word string: ");
        scanf("%s", T);
        for(int i=0; i<5; i++){
            if(S[i]==T[i]) ans[i] = 'G';
            else ans[i] = 'B';
        } // what is this, the ans string is of size 5 but its printing more than that! It ran successfully in CodeChef compiler
        printf("The code for correctness of your guess is: %s\n\n", ans);
    }
}

