#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char str[30];
    printf("Enter a string : ");
    scanf("%[^\n]", str);
    int k=0;
    int size = 0;
    while(str[k]!='\0'){
        k++;
        size++;
    }
    bool flag = true;
    for(int i=0,j=size-1; i<j; i++,j--){
      if(str[i]!=str[j]) flag = false;
      else flag = true;
    } 
    if(flag == true) printf("The string is a palindrome!");
    else printf("The string is not a palindrome.");
    return 0;
}
