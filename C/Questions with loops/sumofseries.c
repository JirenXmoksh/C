#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){//if odd then add in sum.
            sum=sum+i;
        }else{//if even then subtract from sum.
            sum=sum-i;
        }
    }printf("The sum of %d terms is: %d", n, sum);
    return 0;
}