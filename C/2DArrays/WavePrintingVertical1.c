#include<stdio.h> 
int main(){
   int r,c;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   printf("Enter the number of columns: ");
   scanf("%d", &c);
    int arr[r][c] ;
    // Taking inputs
    printf("Enter elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    //Displaying the matrix
    printf("The array is: \n");
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
    }printf("\n");

    // Wave printing (Vertical)
    printf("The array printed in vertical wave form is: \n"); 
   for(int j=0; j<c; j++){ //Fix a column and fuck it element by element(row/row)
    if(j%2==0){
         for(int i=0; i<r; i++){
          printf("%d ", arr[i][j]);
        }printf("\n");
        } else {
        for(int i=r-1; i>=0; i--){ 
          printf("%d ", arr[i][j]);
        }printf("\n");
     }
     }
    printf("\n");
    
    return 0;
}