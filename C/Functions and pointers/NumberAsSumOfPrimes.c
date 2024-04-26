#include<stdio.h>
int primeornot(int n);
int sumofprimes(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    for(int i=1; i<=n/2; i++){
        if(primeornot(i) && primeornot(n-i)){
            printf("Yes, %d = %d + %d", n, i, n-i);
            c = 1;
            break;   
        }
    }
    if(c==0){
        printf("No, the number cannot be expressed as sum of prime numbers");
    }
    return 0;
}

int primeornot(int n){
    if(n<=1) return 0;
    else {
        for(int i=2; i<n; i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

