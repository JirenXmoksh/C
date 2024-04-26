#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter the values: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe trace of this matrix is: ");
    int trace = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(i==j) trace += arr[i][j];
        
        }
    }
    printf("%d", trace);
    return 0;
}