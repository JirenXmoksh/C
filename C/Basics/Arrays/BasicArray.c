#include<stdio.h>
int main(){
//   int arr[5] = {2,4,6,8,1 };   // 5 boxes created
// arr[4]=100; //{2,4,6,8,100}
// arr[1]=1; //{2,1,6,8,100}
// printf("%d", arr[4]);

// double a[3] = { 1.2, 3.4, 5.7};
// printf("%f", a[2]);

// char arr[4]={'a', 'n', 'Y', '%'};
// printf("%c", arr[3]);

// int arr[5]={2,4,6,8,1};
// for(int i=0; i<=4; i++){
//   printf("%d ", arr[i]);
// }

int arr[5];
for(int i=0; i<=4; i++){
  printf("Enter element number %d: ",i+1);
  scanf("%d", &arr[i]);
}
for(int i=0; i<=4;i++){
printf("%d ", arr[i]);
}

   return 0;
}