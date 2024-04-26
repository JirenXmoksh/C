#include<stdio.h> 
int main(){
    int n,m,p,q;
printf("Enter the number of rows for first array: ");
scanf("%d", &n);
printf("Enter the number of columns for first array: ");
scanf("%d", &m);
printf("Enter the number of rows for second array: ");
scanf("%d", &p);
printf("Enter the number of columns for second array: ");
scanf("%d", &q);

if(m!=p){
    printf("These arrays cannot be multiplied");
}
else{
// Input for first array
   int a[n][m];
   printf("Inputs for the first array: \n");
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        scanf("%d", &a[i][j]);
    }
  }printf("\n");
  // Displaying the first array
  printf("The first array is: \n");
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d ", a[i][j]);
    }printf("\n");
  }printf("\n");
// Inputs for the second array
   printf("Inputs for the second array: \n");
  int b[p][q];
  for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        scanf("%d", &b[i][j]);
    }
  }printf("\n");
  // Displaying the second array
  printf("The second array is: \n");
  for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        printf("%d ", b[i][j]);
    }printf("\n");
  }printf("\n");

  //Multiplying now
  int res[n][q]; // Resultant matrix will be of the order nxq from nxm and pxq
  for(int i=0; i<n; i++){
    for(int j=0; j<q; j++){
         res[i][j]=0; // Value is initialized for every element
        for(int k=0; k<m; k++){
            res[i][j] += a[i][k]*b[k][j];
        }
    }
  }//Displaying the answer
  printf("The resultant array is: \n"); // Resultant matrix will be of the order nxq from nxm and pxq
  for(int i=0; i<n; i++){
    for(int j=0; j<q; j++){
        printf("%d ", res[i][j]);
    }printf("\n");
  }printf("\n");
  return 0;
}
}