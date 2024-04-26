// PRACTICAL 25
// Write a Program in C to display the total number of appearances of a 
// substring provided as input by the user in a given string.  

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10000];
    printf("\nEnter a string: ");
    scanf(" %[^\n]", str);
    
    printf("\nEnter the substring: ");
    char substr[1000];
    scanf(" %[^\n]", substr);

    int count = 0;

    
    int len = strlen(str);
    int sublen = strlen(substr);

    for (int i = 0; i <= len - sublen; i++) {
        int j;
        for (j = 0; j < sublen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == sublen) {
            count++;
        }
    }


    printf("\nThe substring '%s' appeared %d times in the input string '%s' ", substr, count, str);


    return 0;
}
