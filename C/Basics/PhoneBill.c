#include<stdio.h>
int main(){
    float calls, sms;
    scanf("%f %f", &calls, &sms);

    float bill = 0;

    if(calls<=50 && sms <=100) bill = 100;

    else if(calls>50 && calls<=100) {
        bill = 100 + (calls-50) * 0.8;
    }
    else if(calls>100 && calls <=200) {
        bill = 100 + 50*0.8 + (calls-100)*0.5;
    }
    else if(calls>200) bill = 100 + 50*0.8 + 100*0.5 + (calls-200)*0.2;

    if(sms>100) bill = 100 + (sms-100)*0.5;

    printf("%f", 0.1*bill + bill);
}