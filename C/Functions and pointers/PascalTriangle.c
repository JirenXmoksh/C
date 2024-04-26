#include<stdio.h>
int factorial(int n);
int combination(int n, int m);
int main(){
    // We have to print, say, for n=5:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1... and so on.
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);

// the formatting gets poor for large test cases if we use loops to print spaces

// int nsp1 = n;
// int nsp2 = 0;
for(int i=0; i<=n; i++){
    // for(int j=1; j<=nsp1; j++){
    //     printf("  ");
    // }nsp1--;
    for(int j=0; j<=i; j++){
        int iCj = combination(i, j);
        printf("%d ", iCj);
        // for(int k=2; k<=n; k++){
        //     printf(" ");
        // }nsp2++;
    }printf("\n");
}
    return 0;
}//Further, we can add spaces to make it look like a pyramid!

int combination(int i, int j){
    int iCj = factorial(i)/(factorial(i-j)*factorial(j));
    return iCj;
}
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}