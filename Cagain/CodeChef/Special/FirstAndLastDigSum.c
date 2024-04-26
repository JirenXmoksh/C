#include <stdio.h>

int main(void) {
int t;
printf("Enter the number of test cases: ");
scanf("%d", &t);
printf("\n");
while(t--){
    int num,ans,dig;
    printf("Enter the number: ");
    scanf("%d", &num);
    int tnum = num;
    if(num<=9){
        printf("The sum of first and last digits of the number entered is: %d\n\n", num*2);
    }
    else{
        while(num!=0){
        dig = num%10;
        num/=10;
        if(num<=9) {
            ans = num;
            break;
        }
        
    }
    printf("The sum of first and last digits of the number entered is: %d\n\n", ans+tnum%10); 
    }
   
}
}

