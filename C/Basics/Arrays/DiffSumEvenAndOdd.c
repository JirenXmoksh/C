#include<stdio.h>
int main(){
    int sumEven=0;
    int sumOdd=0;
    int arr[10]={3,3,4,1,5,2,5,6,17,7};
    for(int i=0; i<=9; i++){
if(i%2==0){
    sumEven+=arr[i];
} else {
    sumOdd+=arr[i];
}
    }
    printf("The difference between the sum of elements at even indices and the sum of elements at odd indices is: %d", sumEven-sumOdd);
    return 0;
}