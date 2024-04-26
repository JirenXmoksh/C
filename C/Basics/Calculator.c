#include<stdio.h>
int main(){
    double a; // 1st operand
    scanf("%lf", &a);
    char ch; // Operator
    scanf("%c", &ch);
    double b; //2nd operand
    scanf("%lf", &b);
    
    // if(ch=='+')
    // printf("%f", a+b);
    // if(ch=='-')
    // printf("%f", a-b);
    // if(ch=='/')
    // printf("%f", a/b);
    // if(ch=='*')
    // printf("%f", a*b);
    switch(ch){
        case '+' :
          printf("%f", a+b);
          break;
        case '-' :
          printf("%f", a-b);
          break;
        case '/' :
          printf("%f", a/b);
          break;
        case '*' :
          printf("%f", a*b);
          break;
        default : printf("Invalid Operator");

    }
    return 0;
}