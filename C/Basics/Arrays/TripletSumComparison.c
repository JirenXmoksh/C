#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x = 12; //Or can be taken input
    int totalTriplets=0;
    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){
            for(int k=j+1; k<=7; k++){ //Very inefficient code
                if(arr[i]+arr[j]+arr[k] == x){
                totalTriplets++;
                printf("(%d,%d,%d)\n", arr[i],arr[j],arr[k]);
               }
            }
        }
    }
    printf("%d", totalTriplets);
    return 0;
}