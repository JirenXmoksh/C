#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int digcount = 0;
    for(;;){
        digcount++;
        num/=10;
        if(num==0) break;
        else continue;
    }
    printf("The entered number has %d digits", digcount);
    return 0;
}