#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n - 1;
    for(int i=1; i<=n; i++){
        for(int m=1; m<=nsp; m++){
            printf("  ");        
        }nsp--;
        //int a = 1;
        for(int j=1; j<=i; j++){
        char ch = (char)(j+64);
        printf("%c ", ch);
         //a++;
         
        }int a = i-1; 
        for(int k=2; k<=i; k++){
            
            int d;
            d =  a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a--;
        }
        
        printf("\n");
    }
   
    
    return 0;

}