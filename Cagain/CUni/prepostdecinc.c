//
#include<stdio.h>
int main(){
    printf("\npre increment\n y = 12 initially...\n");
    int y = 12;
    int z = ++y;
    printf("z: %d y: %d\n",z,y );
    y++;
    z = y;
    printf("z: %d y: %d", z,y);
    

    printf("\npost increment\n a = 5 initially...\n");
    int a = 5;
    int b = a++;
    printf("b: %d a: %d\n",b,a );
    b = a;
    a++;
    
    printf("b: %d a: %d\n\n", b,a);

    // printf("%d",sizeof("casdwaasdwasdsd"));
    // I just found the function to find the length of a string!!
    return 0;
}