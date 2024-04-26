#include<stdio.h>
int main(){//All elements present except one, find that out
     int arr[10] = {1,2,3,5,6,7,8,9,10};//This is an example but concept remains same.
     int sum=0;
     int sum2=0;
     for(int i=0; i<9; i++){ //8 because one is missing
      sum+=arr[i];
     }
     for(int i=1; i<=10; i++){//Because we know the original range is 1 to 10
        sum2+=i;
     }
     printf("The missing number is: %d", sum2-sum);
    return 0;

}