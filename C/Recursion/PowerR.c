#include<stdio.h>
int power(int a, int b);
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter exponent: ");
    scanf("%d", &b);
   int p = power(a,b);
   printf("%d raised to the power %d is : %d ", a,b,p);
    return 0;
}
int power(int a, int b){
 if(b==1) return a;
   int p = a*power(a,b-1);
return p;
}