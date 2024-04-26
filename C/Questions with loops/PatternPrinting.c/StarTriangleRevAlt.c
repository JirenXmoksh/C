#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows we want in the triangle: ");
    scanf("%d", &n);
    int a = n;
    for(int i =1; i<=n;i++){
      for( int j=1; j<=a; j++){//the loop will iterate a times in a single iteration.
        printf("* ");
    }a--;
    printf("\n");
    }
    
    
    return 0;
}