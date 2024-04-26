#include<stdio.h>
int main(){
     int dig;
     int n;
    
     for(int i=1; i<=500; i++){
         int Asum = 0;
         n = i;
     while(n!=0){
         dig = n%10;
         Asum = Asum +(dig*dig*dig);
         n=n/10;
    }
    if(i==Asum){
        printf("%d is an Armstrong number\n", i);
    }
 }
    return 0;
}