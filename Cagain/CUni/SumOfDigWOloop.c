#include<stdio.h>
int main(){
    
    int fivDig, dig1, ans;
    printf("Enter a five digit number: ");
    scanf("%d", &fivDig);

    // dig1 = fivDig % 10;
    // ans  += dig1;
    // fivDig /=10;

    // dig1 = fivDig % 10;
    // ans += dig1;
    // fivDig /=10;

    // dig1 = fivDig % 10;
    // ans += dig1;
    // fivDig /=10;

    // dig1 = fivDig % 10;
    // ans += dig1;
    // fivDig /=10;

    // dig1 = fivDig % 10;
    // ans += dig1;

    ans = (fivDig%10) + ((fivDig%100)/10) + ((fivDig%1000)/100) + ((fivDig%10000)/1000) + (fivDig/10000);
    printf("The sum of digits of the number entered is: %d",ans);

    return 0;
}