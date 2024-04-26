#include<stdio.h>
int main(){//predict the output
int x = 5;
printf("%d ", x);
printf("%d ", x++);
printf("And ");
x = 5;
printf("%d ", x);
printf("%d ", ++x); // ++x means first increment the value of x then use it, where x++ means first use then increment.

    return 0;
}