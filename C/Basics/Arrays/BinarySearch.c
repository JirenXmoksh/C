#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    int target;
    scanf("%d", &target);
    // for(int i=0,j=n-1; i<=j; i++,j--){

    // }
    int i = 0;
    int j = n-1;
    int mid;
    mid = (i+j)/2;
    while(1){
        if(target==arr[mid]) {
            printf("%d found at %d", target, mid+1);
            break;
        }
        else if(target>arr[mid]){
            i = mid + 1;
        }
        else j = mid -1 ;

        mid = (i+j)/2;
    }
    
    return 0;
}