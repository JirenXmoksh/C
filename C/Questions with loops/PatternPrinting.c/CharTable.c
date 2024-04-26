#include<stdio.h>
int main(){
int n;

printf("Enter the number: ");
scanf("%d", &n);
 
 for(int i=1; i<=2*n+1; i++){
    char ch=(char)(i+64);
    printf("%c ", ch);
 }printf("\n");
 int nst = n;
 int nsp = 1 ;
 //int a = 1;
for(int i=1; i<=n; i++){
    int a = 1;
    for(int j=1; j<=nst; j++){
        int d = a + 64;
        char ch=(char)d;
printf("%c ", ch);
a++;
    }
    for(int j=1; j<=nsp; j++){
        printf("  ");
        a++;
    }//int a = 1;
    for(int j=1; j<=nst; j++){
        int d = a + 64;
        char ch=(char)d;
        printf("%c ", ch);
    a++;
    }
    nsp+=2;
    nst--;
    printf("\n");
}

return 0;
}