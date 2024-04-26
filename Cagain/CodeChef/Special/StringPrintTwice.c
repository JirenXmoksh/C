#include<stdio.h>
#include<string.h>
#define MAX_LEN 1001

int main(){
    int t;
    char Ostr[MAX_LEN]; //initiate a input string
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    for(int i=0; i<t; i++){

        scanf("%s", Ostr); // take input of the string
        int len = strlen(Ostr); // store the length of string in a variable

        char Nstr[MAX_LEN*2]; // create a new string of double the length of input string
       
        for(int j=0; j<len; j++){
            Nstr[j] = Ostr[j]; // copy original string into a new string
        }
        for(int j=0; j<len; j++){
            Nstr[len+j] = Ostr[j]; // The new string is filled till 'len' already, so we add on characters afer that, till 'len'
        }
        Nstr[2*len] = '\0'; //they say use it to terminate the string! idk what's this about, if i dont put this, random values are printed along with the required answer
            printf("%s\n", Nstr);
       
    }
    return 0;
}


