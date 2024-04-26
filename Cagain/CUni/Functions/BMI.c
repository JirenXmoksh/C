#include<stdio.h>
float BMI(float weight, float height);
int main(){
    float weight, height;
    printf("Enter your weight and height as space seperated inputs in SI units: ");
    scanf("%f %f", &weight, &height);
    float result = BMI(weight,height);

    printf("Your BMI is: %.3f",result);
    return 0;
}

float BMI(float weight, float height){
    float result = weight/(height*height);
    return result;
}