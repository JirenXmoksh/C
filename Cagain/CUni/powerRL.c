#include<stdio.h>

int power(int a, int b);

int main(){
    int base, exp;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &exp);

    int ans = power(base,exp);
    printf("%d raised to the power %d is %d", base, exp, ans);

    return 0;
}
int power(int a, int b){
    if(b==0) return 1;
    else if(b==1) return a;
    else if(b%2==0) return power(a,b/2)*power(a,b/2);
    else if(b%2!=0) return a*power(a,b/2)*power(a,b/2);
   

}