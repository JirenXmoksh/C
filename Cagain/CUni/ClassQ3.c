#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    printf("Enter the marks obtained in the 5 subjects as space seperated inputs: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    printf("The aggregate is %f\n", m1+m2+m3+m4+m5);
    printf("The percentage obtained is %f", ((m1+m2+m3+m4+m5)/500)*100);
    return 0;
}