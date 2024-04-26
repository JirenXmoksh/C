#include<stdio.h>
void reverse(int arr[]);
int main(){
   int arr[7] = {1,2,3,4,3,2,1};
   for(int i=0,j=6; i<=j; i++,j--){
   if(arr[i]!=arr[j]){
        printf("No its not a palindrome\n");
        break;
    } 
   }
    return 0;
}

