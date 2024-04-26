#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int fact(int num);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");

    while(1){
    int i;
    printf("Enter the choice:\n1 for Factorial\n2 for Prime number or not\n3 Odd or even\n4 Exit\n\n");
    scanf("%d", &i);

    int ans;
    bool flag;
    switch(i){
        case 1:
        ans = fact(num);
        printf("%d\n\n",ans);
        break;

        case 2:
        flag = true;
        for(int j=2; j<num; j++){
            if(num%j==0){
                flag = false;
                break;
            }
        }
        if(flag==false) printf("Not a prime number\n\n");
        else printf("Prime number\n\n");
        break;

        case 3:
        if(num%2==0) printf("Even\n\n");
        else printf("Odd\n\n");
        break;

        case 4:
        exit(0);
        break;
        
    }
    }
    printf("Hello\n");
    return 0;
}

int fact(int num){
    if(num==0 || num==1) return 1;
    else return num*fact(num-1);
}