#include<stdio.h>
int main(){

    int num, dig, ans;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    ans = ((num%10)*10000) + (((num%100)/10)*1000)+ (((num%1000)/100)*100) + (((num%10000)/1000)*10) + (num/10000);
    
    printf("The reverse of the input number is: %d", ans);
    
    return 0;
}