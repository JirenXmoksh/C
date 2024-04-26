#include<stdio.h>
#include<stdbool.h>
int main(){
   
    int arr[7]={1,3,6,6,1,2,3}; 
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6;j++){
           if(arr[i]==arr[j]){
           arr[i] = -1;
           arr[j] = -1;
           } 
        }
    }
    for(int i=0; i<7; i++){
        if(arr[i]>0)
        printf("%d is unique", arr[i]);
    }
    return 0;
}
