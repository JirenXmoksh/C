#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    int nCr = fact(n)/(fact(n-r)*fact(r));
printf("The value of nCr is: %d", nCr);
    return 0;
}
int fact(int n){
     int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}
// ||ly nPr can be printed.