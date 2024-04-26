#include<stdio.h>

int sumofdigs(int n);

int main(){
    
    int fivDig;
    printf("Enter the number: ");
    scanf("%d", &fivDig);
    int ans = sumofdigs(fivDig);

    printf("Sum of digits of %d is %d",fivDig, ans);
    return 0;
}
int sumofdigs(int n){
    if(n == 0){
        return 0;
    }
    else{
        return (n % 10) + sumofdigs(n / 10);
    }
}