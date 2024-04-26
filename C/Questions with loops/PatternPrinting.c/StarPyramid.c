#include<stdio.h>
int main(){
    int n;
    int nst=1;
    int nsp=n-1;
    printf("Enter the number of lines we want in the pyramid: ");
scanf("%d", &n);
for(int i=1; i<=n; i++){
    for(int j=1; j<=nsp; j++){//Or j<=n-i but dont write nsp--
        printf("  ");
    }nsp--;
    for(int k=1; k<=nst; k++){/*or*//*for(int k=1; k<=2*i-1; k++){
                                      printf("* ");
                                   }*/
    printf("* ");
    }
    nst=nst+2;
    printf("\n");
   
}
return 0;
}