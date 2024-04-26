#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of fibonacci numbers you want to obtain: ");
    scanf("%d", &n);
        int first = 0;
        int second = 1;
    printf("%d %d ", first, second);   
    for(int i=3; i<=n; i++){
        int next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
     }       
       return 0;
}