#include<stdio.h>
int main(){
    int pcsold;
    float pcprice;

    printf("\nEnter the total PCs sold and selling price for each PC: ");
    scanf("%d %f", &pcsold, &pcprice);
    float bonus;
    bonus = pcsold*200;
    float commision;
    commision = 0.02*pcsold*pcprice;

    printf("The gross salary of the employee is %.3f\nBonus for selling %d PCs is %.3f\nCommision for the month is %.3f",(1500+bonus+commision), pcsold, bonus, commision);
    return 0;
}