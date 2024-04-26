//Works only for a sorted array
#include<stdio.h>
int main(){
    int arr[10]={1,3,8,9,10,11,12,13,14,16};
    int i=0; int j=9;
    int n;
    printf("Enter the target number which should be equal to the sum of two elements from the array: ");
    scanf("%d", &n);
    while(i<=j){
        if(arr[i]+arr[j] == n){
            printf("The pair is (%d,%d)", arr[i], arr[j]);
            break;
    }
        if(arr[i]+arr[j]<n){
        i++;
    }
        if(arr[i]+arr[j]>n){
        j--;
    }
    }
    return 0;
}