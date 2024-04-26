#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of integers we want to store: ");
    scanf("%d", &n );  
    
    int* ptr = (int*)calloc(n,sizeof(int)); 
     printf("The address allocated originally : %p\n", ptr);//This pointer is used to take inputs
    int* p = ptr; // while this p is still there which will help us to print after 
                  // we take inputs, it is still pointing at the starting address
    printf("Memory is allocated for %d integers\n", n);
    printf("Input numbers");
    for(int i=0; i<n ;i++){
        scanf("%d", &(*ptr));
        ptr++;
    }
    printf("The numbers were: \n");
    for(int i=0; i<n ;i++){
        printf("%d ", (*p));
        p++;
    }printf("\n");
    ptr = realloc(ptr, (2*n)*sizeof(int));
    printf("The address after reallocation: %p\n", ptr);
    // printf("\n");
    // int* q = (int*)malloc(100*4);
    // printf("%d", *q);
    return 0;  
}