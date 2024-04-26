#include<stdio.h>
int main(){

    printf("\nint a = 5, float = 5.0, float c\n");
    int a = 5;
    float b = 5.0;
    float c = a/b;
    printf("%f\n\n", c);

    printf("int a = 5, int b = 5, float c\n");
    int d = 5;
    int e = 5;
    float f = d/e;
    printf("%f\n\n",f);

    printf("float a = 5.0, float b = 5.0, int c\n");
    float g = 5.0;
    float h = 5.0;
    int i = g/h;
    printf("%f\n\n",i);


    printf("%f", 6.0*5);
    
    return 0;
}