// Find prime factors using recursion
#include<stdio.h>
int prime(int a);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nPrime factors of %d are: ", a);
    prime(a);
    return 0;
}
int prime(int a){
    int i;
    for(i=2; i<=a; i++){
        if(a%i==0){
            printf("%d ", i);
            break;
        }
    }
    return prime(a/i);

}