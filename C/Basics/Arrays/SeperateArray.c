#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int odd = 0;
    int even = 0;
   
    int evenArr[n];
    int oddArr[n];
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenArr[even++] = arr[i];
        }
        else oddArr[odd++] = arr[i];

    }
    printf("\nThe odd elements are: ");
    for(int i=0; i<odd; i++){
        printf("%d ", oddArr[i]);
    }printf("\n");
    printf("The even elements are: ");
    for(int i=0; i<even; i++){
        printf("%d ", evenArr[i]);
    }printf("\n");
    return 0;
}