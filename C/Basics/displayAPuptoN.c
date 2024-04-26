#include<stdio.h>
int main() {// given ap was 1.3.5.7.9...
int n; 
printf("Enter the number of terms we want to obtain in the odd AP: ");
scanf("%d", &n);
for(int i=1; i<=(2*n-1); i=i+2){
printf("%d ", i);
}
}