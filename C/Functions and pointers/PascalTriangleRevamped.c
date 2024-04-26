#include<stdio.h>
int main(){
    //We will use the relation between nC(r+1) and nCr
    // W.K.T. nC(r+1) = n!/((r+1)!*(n-r-1)!)
    
    //        nC(r+1) = n!/((r+1)!*((n-r)!/(n-r)))
    
    //        nC(r+1) = (n!*(n-r))/((n-r)!*(r+1)*r!)
    
    // From nCr = n!/((n-r)!*r!),
    
    // We have nC(r+1) = nCr*(n-r)/(r+1).

//And, we will replace n with i and r with j
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);
for( int i=0; i<=n; i++){
    int first = 1;
    for(int j=0; j<=i; j++){
         printf("%d ", first);
        first = first*(i-j)/(j+1); //iC(j+1), iCj = first[RHS], iC(j+1) = first[LHS]
     }printf("\n");
}
        return 0;
}