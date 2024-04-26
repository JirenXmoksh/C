#include<stdio.h>
int fib(int n);
int main() {
    int n;
    printf("\nEnter the number of terms we want to obtain: ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d terms: ", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
int fib(int n){
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}