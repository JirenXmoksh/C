#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: "); 
    scanf("%d", &r);
    printf("Enter the number of columns: "); 
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements: \n");
 for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d", &arr[i][j]);
    }
 }printf("\n");

 printf("The array is: \n");
 for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ", arr[i][j]);
    }printf("\n");
 }printf("\n");
 
 int sum = 0;
 printf("The sum of array is: \n");
 for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        sum+=arr[i][j];
    }
 }
  printf("%d", sum);
    return 0;
}