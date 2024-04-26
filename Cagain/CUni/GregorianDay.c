#include<stdio.h>
int main(){
    int curyr, days, gapyrs, leapyr, normalyr;
    printf("Enter the current year: ");
    scanf("%d", &curyr);

    gapyrs = (curyr-1) - 1900;

    leapyr = gapyrs/4;
    normalyr = gapyrs - leapyr;

    days = (leapyr*366) + (normalyr*365) + 1;
    
    switch(days%7){
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
        default: printf("Invalid"); break;
    }

    return 0;
}