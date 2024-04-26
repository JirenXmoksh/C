#include<stdio.h>
void decreasingIncreasing(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   decreasingInreasing(n);
    return 0;
}
void decreasingIncreasing(int n){
    if (n==0) return;
printf("%d\n", n);
decreasingincreasing(n-1);
printf("%d\n", n);
return;
}