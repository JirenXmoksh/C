#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={64,89,100,9,98,1,2};
    int max = INT_MIN; //this means assigning a very very small value, so practically, any other number will be greater than this
    int smax = INT_MIN;
    // for(int i=0; i<=6; i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // // -4 has been assigned the max value
    // for(int i=0; i<=6; i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax = arr[i];
    //     }
    // }
for(int i=0; i<=6; i++){
    if(arr[i]>max){
        smax = max;
        max=arr[i];
    }   
    else if(arr[i]>smax && max!=arr[i]){ //This will work only when the above condition doesnt work anymore i.el: max > arr[i]
        smax = arr[i];
    }
    // if(arr[i]>smax && arr[i]!=max){ //Here in every iteration, arr[i] is always equal to max, so the second 'if statement' never works and
    //     smax=arr[i]; //this gives the value of INT_MIN to smax
    // }
}


    printf("Maximum number from the array is: %d\n ", max);
    printf("Second largest number from the array is: %d", smax);
    return 0;
}