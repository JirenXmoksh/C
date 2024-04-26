#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int m = n;
    for(int i=1; i<=m; i++){
    int a = n;
        for(int j=1; j<=n; j++){
          printf("%d ", a);
          a--;
         }
        n--;
        printf("\n");
    }
  
        
 return 0;

}