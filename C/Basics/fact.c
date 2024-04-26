#include<stdio.h>
int main(){
    long n;
    printf("Enter the number whose factorial we want to obtain: ");
    scanf("%d", &n);
    unsigned long long fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;

        }
        printf("%llu", fact);
}