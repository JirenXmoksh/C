#include<stdio.h>
int main(){
    char s[] = "Get organized! Learn C!";
    printf("%s\n", &s[2]); // print from the given element till the end with "%s" and '&'.
    printf("%s\n", &s[6]); // print from the given element till the end with "%s" and '&'.
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);
    return 0;
}