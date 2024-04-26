#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
//The required pattern for, say, n=4:
// 1 2 3 4 5 6 7


// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
    int nst=n;
    int nsp=1;
    
    //Also we have to print the top line of the table, so for that:
    // for(int p=1; p<=2*n+1; p++){
    //     printf("%d", p);
    // }printf("\n");//This is a seperate loop.
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nst; j++){
         printf("%d", a);
         a++;
    //    }for(int k=1; k<=nsp; k++){
    //      printf(" ");
    //      a++;
    //    }
    //    for(int j=1; j<=nst; j++){
    //      printf("%d", a);
    //      a++;
       }nst--;
       nsp+=2;
         printf("\n");
}
     
     return 0;
}