#include<stdio.h> // What actually is a 2D array? The number in the first [] gives the number of 
//outer boxes and second [] gives the number of inner boxes made in 
//one outer box, like if we write arr[2][4], it means we have created two big boxes each of which can hold 4 elements!
int main(){
    // array is: 
    // 1 2 
    // 3 4
    int arr[2][3] = {{1,2,3},{3,4,5}}; 
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }
   
    return 0;
}