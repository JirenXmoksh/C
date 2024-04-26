#include<stdio.h> 
int main(){
    int r,c;
printf("Enter the number of rows for both the arrays: ");
scanf("%d", &r);
printf("Enter the number of columns for both the arrays: ");
scanf("%d", &c);


   int a1[r][c];
   printf("Inputs for the first array: \n");
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d", &a1[i][j]);
    }
  }printf("\n");
  printf("The first array is: \n");
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ", a1[i][j]);
    }printf("\n");
  }printf("\n");

   printf("Inputs for the second array: \n");
  int a2[r][c];
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d", &a2[i][j]);
    }
  }printf("\n");
  printf("The second array is: \n");
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ", a2[i][j]);
    }printf("\n");
  }printf("\n");
  
  printf("Now, the Sum Array is: \n");
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ", a1[i][j]+a2[i][j]);
    }printf("\n");
  }
    return 0;
}