#include<stdio.h>
int main(){
    for(int i=65; i<=90;i++){
        char ch = (char)i; //Typecasting
        printf("%c --> %d\n", ch,i);
         }
    return 0;
}