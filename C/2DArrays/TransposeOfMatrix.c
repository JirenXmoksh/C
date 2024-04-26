#include<stdio.h> 
int main(){
   int r,c;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   printf("Enter the number of columns: ");
   scanf("%d", &c);
    int arr[r][c] ;
    printf("Input the elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
     printf("The array is: \n");
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
    }
    //int brr[c][r]; //Storing our tranpose in another matrix.(optional)
     printf("The tranpose of the array is: \n");
    for(int i=0; i<c; i++){ //We switched r and c for transpose 
        for(int j=0; j<r; j++){
            printf("%d ", arr[j][i]);
           //brr[i][j]=arr[j][i];
        }printf("\n");
    }
    //Printing brr[][]...
    // for(int i=0; i<c; i++){
    //     for(int j=0; j<r; j++){
    //         printf("%d ", brr[i][j]);
    //     }printf("\n");
    // }
    return 0;
}