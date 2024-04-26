// PRACTICAL - 7

//  Write a Program to find the greatest among three numbers using:
// (i) Conditional (ternary) Operator
// (ii) If-Else statement
#include<stdio.h>
int main(){
    // (i) Conditional (ternary) Operator
    int a, b, c;
    printf("Enter the three numbers as space seperated inputs: ");
    scanf("%d %d %d", &a, &b, &c);
    (a>b && a>c) ? printf("%d is the greatest\n\n", a):((b>a && b>c) ? printf("%d is the greatest\n\n", b):printf("%d is the greatest\n\n", c));
    
    // (ii) If-Else statement
    int a1, b1, c1;
    printf("Enter the three numbers as space seperated inputs: ");
    scanf("%d %d %d", &a1, &b1, &c1);
    if(a1>b1){
        if(a1>c1){
            printf("%d is the largest",a1);
        }
        else {
            printf("%d is the largest",c1);
        }
   }
   else{
    if(b1>c1){
        printf("%d is the largest",b1);
    }
    else{
        printf("%d is the largest",c1);
    }
   }
    return 0;
}