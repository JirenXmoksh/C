#include<stdio.h>
int main(){
    int a =3;
    int n;
    printf("Enter the number of terms we want to obtain: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        printf("%d ", a);
        a=a*4;
    }
}
