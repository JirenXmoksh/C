#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Moksh Singh";
    // char* ptr = "String", the character pointer can be used to store a string 'directly'
    char* ptr = str;  //Address of the string is stored in a pointer variable
   //The ptr pointer is pointing to the first character of the string 'M' intially
   printf("%p\n", &str[0]);
   printf("%p\n",   str);
   printf("%p\n",   ptr);
   printf("%c\n ",   *ptr); //ASCII value of 'M' is printed if '%d' and 'M' if '%c'
   // The address of an array or a string is the same as that of its first element/character
   //*ptr means the first element of the string/array
   while(*ptr!='\0'){
    printf("%c", *ptr);
    ptr++;
   }
    return 0;
}