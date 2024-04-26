#include<stdio.h>
#include<math.h>

int main(){
    int rem;
    int num;
    for(int i=1;i<=500;i++){
        num = i;
        int sum = 0;
        
        while(num>0){
            rem = num%10;
            sum += rem*rem*rem;
           // printf("%d ", sum);
            num = num/10;
        }
        if(i == sum){
            printf("%d\n",i);
        }
    }
    // int ans = pow(5,3) + pow(1,3) + pow(3,3);
    // printf("%d", ans);
    return 0;
}