#include<stdio.h>
int main(){
    int sumArr = 0;
    int sumOrg = 0;
    int arr[10]={1,2,3,4,5,6,7,8,2,9};
    for(int i=0; i<10; i++){
        sumArr+=arr[i];
    }
    for(int i=0; i<10; i++){
        sumOrg+=i;
    }
    printf("The duplicate number is: %d", sumArr-sumOrg);
    return 0;
}