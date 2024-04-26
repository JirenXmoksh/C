#include<stdio.h>
int main(){
    char suite = 3; // char suite = '3'; int suite = 3; int suite = '3';
    switch (suite){
        case 1: printf("\nDiamond"); 
        case 2: printf("\nSpade");
        case 3: printf("\nClub"); 
        default: printf("\nHeart");
    }   // If we put break statements in each case then we get the required output, but without break, the execution starts from the entered one and carried on to all the remaining ones.
    printf("\nI thought one wears a suite");
    return 0;
}