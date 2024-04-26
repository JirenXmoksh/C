#include<stdio.h>
int minimum(int a, int b);
int gcd(int a, int b);
int main(){
    int n,m;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &m);
    int hcf = gcd(n,m);
     printf("The HCF os %d and %d is : %d ", n,m,hcf);

    return 0;

}
int gcd(int a, int b){
    int hcf;
    for(int i=minimum(a,b); i>=1; i--){       
        if(a%i==0 && b%i==0){
             hcf = i;
             break;
        }
    }
return hcf;
}
int minimum(int a, int b){
    if(a<b) return a;
    else return b;
}