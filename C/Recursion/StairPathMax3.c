#include<stdio.h>
int Sways(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ways = Sways(n);
    printf("The total number of ways %d can be climbed, provided max 3 steps can be taken at a time, are: %d",n, ways);
    return 0;
}
int Sways(int n){
    if(n==1 || n==2) return n;
    if(n==3){
        return 4;
    }

    int totalWays = Sways(n-1) + Sways(n-2) + Sways(n-3);
return totalWays;
}