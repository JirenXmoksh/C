#include<stdio.h>
int main(){
int arr[5] = {1,2,3,4,5};
int brr[5]; //{5,4,3,2,1}
for(int i=0; i<=4; i++){
    brr[i] = arr[4-i];
}
for(int i=0; i<=4; i++){
    printf("%d ", brr[i]);
}
    return 0;
}