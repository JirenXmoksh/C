#include<stdio.h>
int maze2(int n, int m);
//Optimised mazePath
int main(){
int n;
printf("Enter the number of rows of the maze: ");
scanf("%d", &n);
int m;
printf("Enter the number of columns of the maze: ");
scanf("%d", &m);
 int noOfways = maze2(n,m);
 printf("The no. of ways to cross the maze with the conditions of Right or Down are: %d", noOfways);
    return 0;
}

int maze2(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){ //cannot go down
      rightWays+=maze2(n,m-1); 
    }
    if(m==1){//cannot go right
        downWays+=maze2(n-1,m);
    }
    if(n>1 && m>1){
rightWays+=maze2(n,m-1);
downWays+=maze2(n-1,m);
    }
   int totalWays = rightWays + downWays;
   return totalWays;
}