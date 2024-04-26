#include<stdio.h>
#include<math.h>

int main(){
    
    float a,b,c;
    printf("Enter the first side: ");
    scanf("%f", &a); 
    
    printf("Enter the second side: ");
    scanf("%f", &b); 

    printf("Enter the third side: ");
    scanf("%f", &c);    

    float s = (a+b+c)/2;
    printf("%f", s);
    printf("\n");
    printf("The area of the triangle is: %f units", sqrt(s*(s-a)*(s-b)*(s-c)) );
    return 0;
}