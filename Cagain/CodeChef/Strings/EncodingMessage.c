#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the size of the string message to be encoded: ");
        scanf("%d", &n);
        char str[n];
        printf("Enter the string: ");
        scanf("%s", str);
        //printf("%s\n", str);
        
        // first step to swap adjacent letters
        
        for(int i=0; i<n-1; i+=2){
            int temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
        // printf("%s\n", str); swapped!
        
        // second step to replace each letter with their respective counterpart, a with z, b with x etc.
        printf("The message after encoding is: ");
        for(int i=0; i<n; i++){
            int ascii = (int)str[i];
            ascii = 122 - (ascii - 97);
            char c = (char)ascii;
            printf("%c", c);
            
        }
        printf("\n\n");
    }
}

