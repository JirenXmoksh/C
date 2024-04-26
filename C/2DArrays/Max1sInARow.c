#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][4]={{1,0,1,1,},{0,1,0,1},{1,1,1,1}};
    // 1011
    // 0101
    // 1001
    int max = INT_MIN;
    int a;
    printf("The matrix/array is: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } //We will calulate the sum of each row, the row with the highest sum will
     // obviously have the most number of 1s.
      for(int i=0; i<3; i++){
         int sum = 0;
         for(int j=0; j<4; j++){
             sum+=arr[i][j];
             if(sum>max){
                 max = sum;
                 a = i;
             }
          }
       }
     printf("The row number %d has the most number of 1s, which is %d", a+1, max);
    return 0;
}