#include<stdio.h>
#include<limits.h>
int main(){
    int r,c,a;
    int max=INT_MIN;
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
 
 printf("The sum of array is: \n");
 for(int i=0; i<r; i++){
    int sum = 0; //The sum is initialized for every row
    for(int j=0; j<c; j++){
        sum+=arr[i][j];
        if(sum>max){
            max = sum;
            a=i;
        }
    }
 }
  printf("Row %d has the maximum sum %d", a+1, max);
    return 0;
}