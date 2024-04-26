#include<stdio.h>
long powerLog(int a, int b);
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter exponent: ");
    scanf("%d", &b);
   int pL = powerLog(a,b);
   printf("%d raised to the power %d is : %d ", a,b,pL);
    return 0;
}
long powerLog(int a, int b){
  if(b==0) return 1; 
  if(b==1) return a;
   int pL = powerLog(a,b/2);
  if(b%2==0){ // If and else conditions are checked with the function and not strictly after the function call
   return pL*pL;
  }
    else {
        return pL*pL*a;
}
}
