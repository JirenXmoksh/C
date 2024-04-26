#include<stdio.h>

void showbits(int a);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a );
    printf("The binary representation of the number is: ");
    showbits(a);
    return 0;
}
void showbits(int a){
    int i, k, andmask;
 
  for (i = 8; i >= 0;i--)
  {
    andmask = 1 << i;
    k = a & andmask;
    k == 0 ? printf ("0") : printf ("1");
  }

}