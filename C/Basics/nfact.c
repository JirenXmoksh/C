#include <stdio.h>

int factorial(int n);
int main(){
    
    int n;
    printf("Enter the number of factorials we want to obtain: ");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++){
        printf("%d! : %d\n", i, factorial(i));
    }
    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    // if(n==1 || n==0) return 1;
    // return n*factorial(n-1);
     return fact;
}