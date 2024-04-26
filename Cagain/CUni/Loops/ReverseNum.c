#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int revsum = 0;
    while(num>0){
        int dig = num % 10;
        revsum *= 10;
        revsum += dig;
        num/=10;
    }
    printf("%d", revsum);
    return 0;
}