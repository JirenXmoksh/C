// #include<stdio.h>
// int main(){
//     int a = 1;
//     if(a==1){
//         goto loop;
//     }
//     else a+=10;
//     loop:
//     a++;
//     printf("The value of a is %d  ", a);
//     printf("The value of a is %d", a);
//     return 0;
// }

#include<stdio.h>
int main(){
    int fact=1;
    int a;
    printf("Enter the number whose factorial we want to calculate: ");
    scanf("%d", &a);
    if(a==0) printf("Factorial of 0 is 1");
    else {
    int b = a;

    loop:
        fact=fact*a;
        a = a - 1;
    if(a>=1){
        goto loop;
    }
    else {
       goto print;
    }
    print:
        printf("Factorial of %d is %d",b,fact);
    }
   
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n = 0 ;
//     int sum = 0;
//     loop: 
//     sum+=n;
//     if(n==10){
//         goto Print;
//     }
//     else {
//         n++;
//         goto loop;
//     }
//     Print:
//         printf("The sum is %d", sum);
//     return 0;
// }