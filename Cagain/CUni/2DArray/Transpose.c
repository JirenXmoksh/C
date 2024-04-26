#include<stdio.h>
int main(){

    int n, m;
    printf("\nEnter the rows and columns for the matrix: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("\nEnter the values for the matrix: \n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe transpose of the matrix is: \n");
    int trans[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[j][i] = arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
