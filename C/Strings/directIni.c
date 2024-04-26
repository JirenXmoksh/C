#include<stdio.h>
int main(){
    char* p = "Moksh Singh";
    printf("%s\n", p);
    printf("%c\n", *p);
    p = "Siya Khosla <3";
    printf("%s\n", p);
    printf("%c\n",*p);
    // In this kind of initialization, we cannot modify 
    // individual characters, 
    // In normal initialization, we can modify each 
    // character one by one but not the entire string.!

    char str[] = "College Wallah";
    char* ptr = str;
    //ptr = "Phyiscs Wallah";
    *ptr = 'd'; //Yes it is modified!
    printf("%s\n", str);
     //No it is not modified
     
    //Instead of a string, if we use a character...
     return 0;
    
}