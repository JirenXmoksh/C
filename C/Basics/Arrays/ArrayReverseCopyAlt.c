#include<stdio.h>
void reverse(int arr[]);
int main(){
   int arr[5] = {1,2,3,4,5};
   reverse(arr);
   for(int i=0; i<=4; i++){
     printf("%d ", arr[i]);
    }
    return 0;
}

void reverse(int arr[])
{
 //4 because array length is 5
for(int i=0,j=4; i<=j; i++,j--){ // for(int i=0,j=4; i<j; i++, j--){}
                                 // arr[i] and arr[j] to be swapped
    int temp = arr[i];
    arr[i] = arr[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    arr[j] = temp;
}
return;
}