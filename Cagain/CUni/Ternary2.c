#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two space seperated numbers: ");
    scanf("%d %d", &a, &b);
    a>b? printf("%d is the greater", a):printf("%d is the greater", b);
    return 0;
}