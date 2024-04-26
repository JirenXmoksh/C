#include<stdio.h>
typedef int* int_pointer;
int main(){
    int x=5, y=7; //Integers can be declared in this way
    int_pointer a=&x, b=&y; //But this type of declaration is not possible in case of pointers
    //The computer reads int*a and int b, so to solve this problem we can redefine int*
    //to something else using type def
    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
}