#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Enter your string: ");
    gets(str);
    int count =0;
    for(int i=0; i<strlen(str); i++){
        str[i] = toupper(str[i]);
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') count++;
    }
    printf("The number of vowels in your string are: %d", count);
    return 0;
}
