#include<stdio.h>
int main(){
    //predict the output
    int x, y, z;
    x =4; 
    y = --x;
    z = x--;
    printf("%d %d %d", x,y,z);

    return 0;
}