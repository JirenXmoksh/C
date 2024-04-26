#include<stdio.h>
int main(){
int n;

printf("Enter the number: ");
scanf("%d", &n);
for(int i=1; i<=n; i++){
for(int j=65; j<=n+64;j++){
    printf("%c ", j);
}printf("\n");
}
return 0;
}