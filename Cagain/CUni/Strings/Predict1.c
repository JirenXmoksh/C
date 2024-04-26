#include<stdio.h>
int main(){
    
    char c[2] = "a";
    // char c[100] = "ararua";
    // printf("%c ", c[101]); // prints null character
    printf("%c ", c[0]);
    printf("%s", c);

    return 0;
}