#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "College";
    printf("The original string is : %s\n", s1);
   // We putting an 'l' on the second index position.
    for(int i=6; i>=2; i--){
       s1[i+1] = s1[i]; // Put previous char in next spot
    }
    s1[2] = 'k';
     printf("The altered string is : %s\n", s1);
    return 0;
}