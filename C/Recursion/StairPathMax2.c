#include<stdio.h>
int Stair(int n);
int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    int ways = Stair(n);
    printf("The total number of ways %d steps can be climbed, provided max 2 steps can be taken at a time, are: %d",n, ways);
    return 0;
}
int Stair(int n){
    if(n==1 || n==2) return n;

    int totalWays = Stair(n-1) + Stair(n-2);
return totalWays;
}