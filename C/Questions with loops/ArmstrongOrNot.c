// Didn't know how to calculate power normally until this program
#include<stdio.h>
#include<math.h>

int main(){

    int a,dig;
    printf("Enter the number to be checked: ");
    scanf("%d", &a);
    int len = 0;
    int n = a;
    int test = a;

    while(n!=0){
        len +=1;
        n = n/10;
    }
    int armSum = 0;
    
    while(a!=0){
        dig = a%10;
        int power = 1;
        for(int i=1; i<=len; i++){
            power = power*dig;
        }
        armSum += power;
        a = a/10;
    }
    if(test==armSum){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}