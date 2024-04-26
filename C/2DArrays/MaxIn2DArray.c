#include<stdio.h>
#include<limits.h>

int main(){
    int r,c;
    int max = INT_MIN;
    int a,b;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Input the elements: \n");
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
     
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                a=i;
                b=j; //||ly minimum can be calculated
                //printf("The index is (%d,%d)", i,j);
            }
        }printf("\n");
    }
printf("The maximum number in the array is %d at (%d,%d)", max,a+1,b+1);
    return 0;
}