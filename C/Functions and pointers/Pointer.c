#include<stdio.h>
int main(){
    int a = 5;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%p\n ", &a);
      int* x = &a; //Address of a is stored in a variable called Pointer.
 printf("%p\n", x);
 printf("%p\n", &x);
 printf("%d\n", *x); //If we put * with a pointer variable, then we are accessing the value stored at the address that the pointer is storing.
 int** y = &x; 
 printf("%p\n", y);
 printf("%d\n", **y);
 
   *x = 7;
   printf("%d\n", a);// value of a is changed! Because we accessed the value stored at the address of a through *x(*pointer variable)
    return 0; //Or *p is pointing to the value whose address is stored in p.
}