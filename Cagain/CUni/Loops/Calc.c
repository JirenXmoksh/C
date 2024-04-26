#include<stdio.h>
int main(){
    while(1){
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        int sum = a+b;
        printf("Sum: %d\n", sum);
        printf("Do you want to add something to the sum? (1 for yes, 0 for no): ");
        int n;
        scanf("%d", &n);
        if(n==1){
            printf("Enter the value to be added: ");
            scanf("%d", &a);
            printf("New sum is: %d\n", sum+=a);
        }
        else break;
    }
    
    return 0;
}