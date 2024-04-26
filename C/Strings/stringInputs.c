#include<stdio.h>
int main(){
    //char str[]="College wallah is the best platform for coders";
    // int i=0;
    // while(str[i] != '\0'){
    //     printf("%c", str[i]);
    //     i++;
    // }

    //printf("%s\n", str);
    
    // puts(str);

    // puts("Hello everyone");

    // char str[40];
    // gets(str); //Anything after a space is not even considered if we use scanf so we use 'puts/gets'
    // puts(str);

    char str[40];
    scanf("%[^\n]s", str);    //This can also be used to take input
    printf("Your input was: %s", str);
    return 0;
}