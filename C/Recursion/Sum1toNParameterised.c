#include<stdio.h>
void sum(int n, int s);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    sum(n,0);
   
    return 0;
}
void sum(int n, int s){
if(n==0){
    printf("%d", s); // When n becomes zero, all the sum is stored in 's', so print it.
    return;
}
sum(n-1,s+n); // Keep on adding 'n' to the 's', until 'n' becomes zero
return;
}

