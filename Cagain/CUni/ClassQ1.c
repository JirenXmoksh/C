#include<stdio.h>
int main(){

    float basicSal = 0;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basicSal);

    printf("His dearness and house rent allowances are 40 percent and 20 percent respectively\nTherefore his gross salary is: ");

    printf("%.3f", basicSal+(0.6*basicSal));
    return 0;
}