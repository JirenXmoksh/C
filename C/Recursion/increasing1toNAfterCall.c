#include<stdio.h>
void increasing(int n);
int main(){//This is the same code as decreasing Nto1
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   increasing(n);
    return 0;
}
void increasing(int n){
    if (n==0) return;
increasing(n-1);
printf("%d\n", n); // We just changed the positioning of the code i.e: we put it after call.
return;
}