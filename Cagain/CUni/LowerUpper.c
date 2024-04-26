#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c>='a' && c<='z') printf("Lowercase");
    else if(c>='A' && c<= 'Z') printf("Uppercase");
    else printf("Invalid");
    return 0;
}