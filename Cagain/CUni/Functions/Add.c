#include<stdio.h>
float add(float a, float b);
int main(){
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    float result = add(a,b);

    printf("Addition of %.3f and %.3f is: %.3f",a,b, result);
    return 0;
}

float add(float a, float b){
    float sum = a+b;
    return sum;
}