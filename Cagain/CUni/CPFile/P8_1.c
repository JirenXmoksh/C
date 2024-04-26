// PRACITCAL - 8.1
// Write the following program using switch case statement:
// To check that an input alphabet is vowel or consonant

#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    char ch = tolower(c); // to remove the effect of the case of the alphabet and 
    //make the code more efficient, we convert the input alphabet to lowercase firsthand

    switch(ch){
        case 'a': printf("Vowel"); break;
        case 'e': printf("Vowel"); break;
        case 'i': printf("Vowel"); break;
        case 'o': printf("Vowel"); break;
        case 'u': printf("Vowel"); break;
        default: printf("Consonant");
    }
    return 0;
}
