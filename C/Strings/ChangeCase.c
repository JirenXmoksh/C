#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[]="Aa Bb Cc Dd";
    printf("The string is: %s ",str);
    printf("\n");
    int slength = strlen(str);
    for(int i=0; i<slength; i++){
     if(isupper(str[i])){
       str[i]=tolower(str[i]);
     }
     else str[i] = toupper(str[i]);
    }
    printf("The string with changed case is: ");
    puts(str);
    return 0;
}