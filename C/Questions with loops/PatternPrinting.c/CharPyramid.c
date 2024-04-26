#include<stdio.h>
int main(){
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }nsp--; 
        int a = 1;
        int d;
        for(int k=1; k<=2*i-1; k++){
            d = a + 64; 
            char ch = (char)d;
            printf("%c ", d);
        a++;
        }
        printf("\n");
    }
        return 0;
}