#include<stdio.h>
int main(){
    int arr[10]={56,72,12,11,2,4,5,8,9,10};
    int num;
    int count=0;
    printf("Enter the number which you want to compare: ");
    scanf("%d", &num);
    for(int i=0; i<=9; i++){
         if(num<arr[i]) count++;
         
    }
    printf("The number of array elements greater than the input number are: %d", count);
    return 0;
}