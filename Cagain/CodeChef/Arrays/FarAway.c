#include <stdio.h>

unsigned long long max(unsigned long long a, unsigned long long b);

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        unsigned long long Nsize, Mlim;
        printf("Enter the size of array A and the maximum limit of elements: ");
        scanf("%lld %lld", &Nsize, &Mlim);

        printf("Enter the elements: ");
        unsigned long long arr[Nsize];
        for(int i=0; i<Nsize; i++){
            scanf("%lld", &arr[i]);
        }
        
        unsigned long long dist = 0;
        for(int i=0; i<Nsize; i++){
            arr[i] = max(arr[i]-1, Mlim-arr[i]);
            dist+=arr[i];
        }
        // for(int i=0; i<Nsize; i++){
        //     printf("%d ", arr[i]);
        // } correct!
        
        printf("\n%lld units is the maximum distance for an array B to exist as far as possible from array A\n\n", dist);
    }
}

unsigned long long max(unsigned long long a, unsigned long long b){
    if(a>b) return a;
    else return b;
}
