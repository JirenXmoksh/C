#include<stdio.h>
void reverse(int arr[], int si, int ei); // This function can be used to reverse the whole array or some part of the array.

int main(){
   int arr[7] = {1,2,3,4,5,6,7};
  //index 1-4 reverse
reverse(arr,1,4);
for (int i = 0; i<=6; i++){
    printf("%d ", arr[i]);
 }
}  

void reverse(int arr[], int si, int ei){   
  
   for(int i=si,j=ei; i<j; i++, j--){
    // arr[i] and arr[j] to be swapped
    int temp = arr[i];
    arr[i] = arr[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    arr[j] = temp;
 }
    return;
}

