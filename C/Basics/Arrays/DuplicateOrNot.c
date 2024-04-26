#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[6]={1,2,7,2,6,2};
    for(int i=0; i<=5; i++){
        bool flag = true;
        for(int j=i+1; j<=5;j++){
            if(arr[i]==arr[j]){
                flag = false;
            }
        }
       if(flag == false) {
        printf("%d repeats itself", arr[i]);
        break;
    }
    }
    return 0;
}
