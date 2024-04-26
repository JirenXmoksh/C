#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
int dig;
int sum = 0;
while(n!=0)
{dig=n % 10;
if(dig%2==0){
sum = sum + dig;
}n=n/10;
}

printf("The sum of even digits of the number is %d", sum );
}