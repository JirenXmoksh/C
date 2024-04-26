// PRACTICAL 21
// Write a program matrix multiplication using the concept of 2D array.
#include<stdio.h>
int main(){
    int n1, m1, n2, m2;
    printf("Enter the rows and columns of first and second matrix respectively: ");
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
    if(m1==n2){
        int arr[n1][m1];
        printf("\nEnter the values for the first matrix: ");
        for(int i=0; i<n1; i++){
            for(int j=0; j<m1; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        int brr[n2][m2];
        printf("\nEnter the values for the second matrix: ");
        for(int i=0; i<n2; i++){
            for(int j=0; j<m2; j++){
                scanf("%d", &brr[i][j]);
            }
        }
        printf("\nThe multiplicaition of matrices is: \n");
        for(int i=0; i<n1; i++){
            for(int j=0; j<m2; j++){
                int sum = 0;
                for(int k=0; k<m1 ; k++){
                    sum += arr[i][k]*brr[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    
    }  
    else {
        printf("\nCannot perform multiplicaton on matrices of this order");
    }  
    return 0;
}