#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // 4 7 10 13 16 19... upto n terms.
    //we are going to use extra variables
    int a = 4;
    for(int i=1; i<n; i++){
        printf("%d ", a);  
        a=a+3; 
        
        }
}