#include<stdio.h>
void reverse(int arr[], int a, int b);
int main(){ //Taking inputs
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
  
    for(int i = 0; i<=n-1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
     printf("The array is: \n");
    for(int i = 0; i<=n-1; i++){
       printf("%d ", arr[i]);

    }printf("\n");

    int k;
    printf("Enter the number of steps by which the array is to be rotated: ");
    scanf("%d", &k);
    //steps
    k = k%n;
    reverse(arr, 0, n-1); //Step 1: Rotating full array
    reverse(arr, 0, k-1); //Step 2: Rotating the first k-1 elements
    reverse(arr, k, n-1); // Step 3: Rotating the remaining elements
    printf("The array rotated by %d steps is : \n",k);
    for(int i=0; i<n; i++){
      printf("%d ", arr[i]);
    }
    return 0;
}
void reverse(int arr[], int a, int b){
    for(int i=a,j=b; i<=j; i++,j--){
      int temp = arr[i];
      arr[i]=arr[j];
      arr[j]=temp;    
    }
   return;
}