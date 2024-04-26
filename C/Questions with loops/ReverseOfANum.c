#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    int m = n;
    int dig;
    int revS=0;
    while(n!=0){
        dig=n%10;
        revS=revS*10; // these two have been switched to terminate the zero.
        revS=revS + (dig);//this
        n=n/10;
        }
       // revS=revS/10; this can be used to remove the extra zero at the end of our reversed number, but we have used a better way
        printf("The reversed number is: %d\n", revS);
        printf("The sum of the number and its reverse is: %d", revS+m);
    return 0;
}