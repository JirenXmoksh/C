#include<stdio.h>
int main(){
    int n;
    printf("Enter the fibonacci you want to obtain: ");
    scanf("%d", &n);
        int first= 1;
        int second= 1;
       int next = 1; 
       for(int i=1; i<=n-2;i++){
        next=first+second;
        first=second;
        second=next;
       } printf("The fibonacci of %d is %d",n, next);
      
        }
     
    