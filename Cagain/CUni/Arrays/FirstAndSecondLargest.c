#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the values: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int max = INT_MIN;
    int smax = INT_MIN;
    int maxIdx = -1;

    for(int i=0; i<n; i++){
        if(max<arr[i]) {
            max = arr[i];
            maxIdx = i;
        }
    }
    
    for(int i=0; i<n; i++){
        if(smax<arr[i] && i!=maxIdx) smax = arr[i];
    }

    printf("\nLargest: %d\nSecond Largest: %d", max, smax);
    return 0;
}