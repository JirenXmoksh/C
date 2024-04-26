#include<stdio.h> 
int main(){
   int arr[5][5];
   int n;
   printf("Enter the number we want on every index: ");
   scanf("%d", &n);
  for(int i=0; i<=4; i++){
    for(int j=0; j<=4; j++){
       // scanf("%d", &arr[i][j]);
       arr[i][j]=n;
    }
  }printf("\n");
   for(int i=0; i<=4; i++){
    for(int j=0; j<=4; j++){
        printf("%d ", arr[i][j]);
    }printf("\n");
  }
   
    return 0;
}