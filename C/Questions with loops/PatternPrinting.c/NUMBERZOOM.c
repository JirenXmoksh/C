#include<stdio.h>
int main(){
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);
int min = 0;
// suppose n = 4, we have to print:
// 4 4 4 4 4 4 4 (2*n-1 numbers in each side)
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// first we print:
// 1 1 1 1 1 1 1     in the first quadrant, we observe that the minimum of i/j coordinate is printed. We can extend this to the others by defining the 5th column/ line as:
// 1 2 2 2 2 2 1     first putting i and j in other independent variables then converting 5 to 3, 6 to 2, 7 to 1 and so on.
// 1 2 3 3 3 2 1     This can be understood as 3  = 2*4(=n) - 5(i/j) = 5, 2 = 2*4(=n) - 6(i/j) and so on.
// 1 2 3 4 3 2 1     In this way, the minimum coordinate concept can be used to print all the elements.
// 1 2 3 3 3 2 1     Now for the original pattern, the 'min' coordinate/variable value can be altered to 'n+1-min'. i.e: 1 converted to 4, 
// 1 2 2 2 2 2 1                                                                                                          2 converted to 3, 
// 1 1 1 1 1 1 1                                                                                                       3 converted to 2, 
for(int i=1; i<=2*n-1; i++){                                                                                        //  4 converted to 1, 
  for(int j=1; j<=2*n-1; j++){
     int a = i;
     int b = j;
      if (i>n) {a = 2*n-i;}
      if (j>n) {b = 2*n-j;}
     if(a<b) {min = a;}
     else {min = b;}
    printf("%d ", n-min+1);
  }printf("\n");

}
 return 0;
}