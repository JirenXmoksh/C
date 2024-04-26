#include<stdio.h>
int main(){
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int base;
        printf("Enter the base: ");
        scanf("%d", &base);
        int exp;
        printf("Enter the exponent: ");
        scanf("%d", &exp);
        int powerAns = 1;
        for(int i=1; i<=exp; i++){
            powerAns = powerAns * base;
        }
        printf("%d\n", powerAns);
    }
    return 0;
}