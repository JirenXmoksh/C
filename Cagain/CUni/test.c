
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int pass(int j, int b);

int main() {
    // printf("Hello World!\n");
    // printf("size of char is: %d\n",sizeof(char));
    // printf("size of integer is: %d\n",sizeof(int));
    // printf("size of float is: %d\n",sizeof(float));
    // printf("size of double is: %d\n",sizeof(double));
    // printf("size of unsigned long is: %d\n",sizeof(unsigned long));
    // printf("size of unsigned long long is: %d\n",sizeof(unsigned long long));
    // printf("size of unsigned is: %d\n",sizeof(unsigned));

    int i=135, a=135, k;
    k = pass(i,a);
    printf("\n%d", k);
    
    return 0;
}
int pass(int j, int b){
    int c;
    c = j+b;
    return(c);
}