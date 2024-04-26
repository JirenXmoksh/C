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

    // Wave printing
    printf("The array printed in horizontal wave form is: \n"); //Every odd row is printed reverse
   for(int i=0; i<r; i++){ // Fix a row and fuck it element by element(column/column)
    if(i%2==0){
         for(int j=0; j<c; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
        } else {
        for(int j=c-1; j>=0; j--){ // Just reverse the odd rows
          printf("%d ", arr[i][j]);
        }printf("\n");
     }
     }
    printf("\n");
    
    return 0;
}