// PRACTICAL - 5

// Write a program to evaluate each of the following equations.
// (i) V = u + at. 
// (ii) S = ut+1/2at^2
// (iii) T=2*a+√b+9c 
// (iv) H=√b^2 + p^2

#include<stdio.h>
#include<math.h>

int main(){
    // (i) V = u + at. 
    float iniVel, acc, time;
    printf("The equation: V = u + at\n");
    printf("Enter the initial velocity (u), acceleration (a) and time (t) as space seperated inputs (in SI units): ");
    scanf("%f %f %f", &iniVel, &acc, &time);
    printf("The final velocity is %.3f (SI units)\n\n", iniVel+(acc*time));

    // (ii) S = ut+(1/2)at^2
    float iniVel2, time2, acc2;
    printf("The equation: S = ut+(1/2)at^2\n");
    printf("Enter the initial velocity (u), acceleration (a) and time (t) as space seperated inputs (in SI units): ");
    scanf("%f %f %f", &iniVel2, &acc2, &time2);
    printf("The distance covered according to the input values is: %.3f (SI units)\n\n", ( (iniVel2*time2) + ( (acc2*time2*time2)/2 ) ) );
    
    // (iii) T=2*a+√b+9c 
    float a, b, c;
    printf("The equation: T=2*a+sqrt(b)+9*c\n");
    printf("Enter the values of a, b and c as space seperated inputs (SI units): ");
    scanf("%f %f %f", &a, &b, &c);
    printf("T = %.3f\n\n", 2*a+sqrt(b)+9*c);

    // (iv) H=√b^2 + p^2
    float b2, p;
    printf("The equation: H=sqrt(b)^2 + p^2\n");
    printf("Enter the values of b and p as space seperated inputs: ");
    scanf("%f %f", &b2, &p);
    printf("H = %.3f\n\n", b2 + (pow(p,2)));
    return 0;
}