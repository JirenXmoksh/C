#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int len = 0;
    int temp = n;
    while(temp!=0){
        len++;
        temp/=10;
    }
    printf("%d ", len);
    int dig = n / (int)pow(10,(len-1));
    printf("%d", dig);
    switch(dig){

        
    }
}
