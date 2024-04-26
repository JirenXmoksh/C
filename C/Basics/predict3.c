#include<stdio.h>
int main(){
    //predict the output
    int x, y, z;
   x=4;y=0;
   while(x>=0){
    x--;
    y++;
    if(x==y)continue;
    else printf("\n%d %d ", x,y);
   }
    return 0;
}