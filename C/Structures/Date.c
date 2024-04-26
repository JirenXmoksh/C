#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct Date
    {   int day;
        int month;
        int year;
    }Date; 
     Date a,b; // 2 structure variables
     // a -> 5/12/1999
     // b -> 19/1/2023
     a.day = 5;
     a.month = 12;
     a.year = 2023;

     b.day = 19;
     b.month = 1;
     b.year = 2023;
      
    bool flag = true;
    
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
      
    if(flag==true) printf("The dates are same");
    else printf("The dates are different");
  
    return 0;
}