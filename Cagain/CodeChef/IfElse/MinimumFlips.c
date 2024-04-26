#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the size of array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the values as 1 or -1: ");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        if(n%2!=0) printf("The sum cannot be zero\n\n");
        else{
        int minone = 0;
        int one = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==1) one++;
            else if(arr[i]==-1) minone++;
            sum+=arr[i];
        }
        sum = abs(sum);
        if(sum==0) printf("No flips are required to make the sum equal to 0\n\n");
        else {
            if(minone<one) printf("%d flips are required to make the sum equal to 0\n\n", (n/2)-minone);
            else if(minone>one) printf("%d flips are required to make the sum equal to 0\n\n", (n/2) - one);
        }
         
        }
   
        
        
    }
    return 0;
}
