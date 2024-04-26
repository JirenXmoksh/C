#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n-1;
    int nst = 1;
    int a,i;
    for( i=1; i<=2*n-1; i++){
       if(i<=n){ a = i;}
       if(i>n){ a = 2*n-i;}
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
         for(int l=2; l<=nst; l++){
            printf("%d", a);
            a--;
        }
        for(int k=1; k<=nst; k++){
            printf("%d", k);
        }
        printf("\n");
        if(i<n) {
        nst++;
        nsp--;  
    }
        if(i>=n){
            nst--;
            nsp++;
            a++;
        }
}
return 0;
}