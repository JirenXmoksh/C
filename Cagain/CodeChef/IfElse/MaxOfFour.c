#include<stdio.h>

int maxOfFour(int a, int b, int c, int d);
int maxOfTwo(int x, int y);
int main(){
    int a,b,c,d;
    printf("Enter the four numbers you want to compare: ");
    scanf( "%d %d %d %d", &a, &b, &c, &d);
    int ans = maxOfFour(a,b,c,d);
    printf("The max out of the four entered is: %d",ans);
    return 0;
}
int maxOfFour(int a, int b, int c, int d){
    int num1 = maxOfTwo(a,b);
    int num2 = maxOfTwo(c,d);
    int ans = maxOfTwo(num1, num2);
    return ans;
}
int maxOfTwo(int x ,int y){
    int ans;
    if(x>y){
        ans = x;
    }
    else if(x<y){
        ans = y;
    }
    return ans;
}