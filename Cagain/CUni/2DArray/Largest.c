#include<stdio.h>
int main(){

    int arr[5][5];
    printf("Enter the values for a 5x5 matrix: ");

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    
    printf("The maximum element is %d", max);

    return 0;
}
