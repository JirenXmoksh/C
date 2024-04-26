#include<stdio.h>
int main(){
    char s[] = "Get organized! Learn C!";
    char t[25];
    char* ss, *tt;
    ss = s;

    // printf("%c\n", *ss++);
    printf("%s\n", ss++);
    // printf("%c\n", *ss++);
    printf("%s\n", tt++);

    // tt = t;
    // while(*ss!='\0'){
    //     *ss++= *tt++;
    //     // *tt++ = *ss++;
    //     printf("%s", t);
    // }
 
    return 0;
}