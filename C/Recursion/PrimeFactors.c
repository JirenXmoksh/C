#include<stdio.h>

void primefactors(int n);

int main(){
    int n;
    printf("Enter the number whose prime factors we want: ");
    scanf("%d", &n);
    if(n<=1) printf("Invalid");
    else {
        primefactors(n);
    }

}
void primefactors(int n){
    //int i;
    // for(i=2; i<=n; i++){
    //     if(n%i == 0){
    //         printf("%d ", i);
    //         primefactors(n/i);
    //         break;
    //     }
    // }

    //class code
    // static int i = 2;
    // if(i<=n){
    //     if(n%i==0) {
    //         printf("%d ", i);
    //         n/=i;
    //     }
    //     else {
    //         i++;
    //         primefactors(n);
    //     }
    // }
}