#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("\nThe largest of the three entered numbers is ");
    
   if(a>b){
        if(a>c){
            printf("%d is the largest",a);
        }
        else {
            printf("%d is the largest",c);
        }
   }
   else{
    if(b>c){
        printf("%d is the largest",b);
    }
    else{
        printf("%d is the largest",c);
    }
   }
    return 0;
}