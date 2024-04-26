#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d", &a);
   
    if(a%2==0){
        printf("The entered number is even");
    }
    else if(a%2!=0){
        printf("The entered number is odd");
    }
    return 0;
}