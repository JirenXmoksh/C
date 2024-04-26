#include<stdio.h> 
int main(){
   int n;
   printf("Enter the number of rows/columns: ");
   scanf("%d", &n);
  printf("Enter elements: \n");
    int arr[n][n];
    //Input of the array
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
           scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    //Displaying the array
    printf("The array is: \n");
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
    }
    
    for(int i=0; i<n; i++){
      for(int j=i; j<n; j++){  //or (j=0; j<=i; j++) so that elements once swapped dont get reswapped
//We gotta swap arr[i][j] with arr[j][i]
          int temp = arr[i][j];
          arr[i][j]=arr[j][i];
          arr[j][i]=temp;
          
      }
    }
    //Transpose 
    printf("The transpose of the square array is: \n");
   for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
    }
    return 0;
}