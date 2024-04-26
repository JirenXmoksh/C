#include<stdio.h>
int main(){
    double a = 100.0;
    int n;
printf("Enter the number of terms we want to obtain: ");
scanf("%d", &n);
    for(int i=1;i<=n;i++){
printf("%f ", a);
a = a/2;
    }
    return 0;
}