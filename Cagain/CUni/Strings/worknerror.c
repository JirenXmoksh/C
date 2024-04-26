#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello";
    char str2[20];
    char* s = "Good morning";
    printf("%p ", s);
    char* q;
    // str2 = str1; //Error/
    // q = s; // Work;
    // str1[] ="Hi"; // Error
    s = "Hi"; // Work
    printf("%p", s);
    return 0;

}