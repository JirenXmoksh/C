#include<stdio.h>
int maze(int cr, int cc, int er, int ec);

int main(){
int n;
printf("Enter the number of rows of the maze: ");
scanf("%d", &n);
int m;
printf("Enter the number of columns of the maze: ");
scanf("%d", &m);
 int noOfways = maze(1,1,n,m);
 printf("The no. of ways to cross the maze with the conditions of Right or Down are: %d", noOfways);
    return 0;
}

int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){//Only rightWays can be called now
          rightWays+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//Only downWays can be called
          downWays+=maze(cr+1, cc, er, ec);
    }
    if(cr<er && cc<ec){
       rightWays+=maze(cr,cc+1,er,ec);
       downWays+=maze(cr+1, cc, er, ec);
    } 
     int totalWays = rightWays + downWays;
     return totalWays;
}