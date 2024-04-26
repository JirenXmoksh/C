#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   //int x = fibo(n);
   printf("%d", fibo(n));
    return 0;
}
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    int recAns = fibo(n-1)+fibo(n-2);
    return recAns;
}