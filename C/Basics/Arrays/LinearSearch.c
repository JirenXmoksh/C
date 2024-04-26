// Linear Search
#include<stdio.h>
#include<stdbool.h>
int main(){
   int arr[7]={1,2,3,4,5,6,7};
   int x = 7; //Is this 5 present or not in the above array
   bool flag = false; // means number is not present
   int index = -1;
   for(int i=0; i<=6; i++){
    if(arr[i]==x ){
        flag = true;
        index = i; //  means number is present in array
        break;
    } 
   }if(flag==false){
        printf("%d is not present in the array", x);
    }else{ 
        printf("%d is present in array at index %d ", x, index);
    }
     return 0; 
    }
    
    
   