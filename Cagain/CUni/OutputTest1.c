#include<stdio.h>

int main(){
    int i = 2, j = 3, k, l;
    float a,b;
    k = i/j*j; // (2/3 = 0; 0*3 =0)
    l = j/i*i; // (3/2 = 1; 1*2 = 2)
    a = i/j*j; // (2/3 = 0; 0*3 = 0.00) [firstly int ans is calculated then converted into float]
    b = j/i*i; // (3/2 = 1; 1*2 = 2.00) [same as above]

    printf("%d %d %f %f", k,l,a,b);
    return 0;
}