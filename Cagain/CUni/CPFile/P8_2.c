// PRACITCAL - 8.2
// To check whether a number is positive, negative or zero

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans;
    if(num<0){
        ans = -1;
    }
    else if(num>0){
        ans = 1;
    }
    else ans = 0;

    switch(ans){
        case -1: printf("Negative"); break;
        case 1: printf("Positive"); break;
        case 0: printf("Zero");
    }
    return 0;
}
