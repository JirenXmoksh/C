#include<stdio.h>
int main(){
    int start;
    printf("Enter a the starting: ");
    scanf("%d", &start);
    int end;
    printf("Enter a the ending: ");
    scanf("%d", &end);
    for(int i=start; i<=end; i++){
        printf("%d\n",i);
        if(i==7) break;
    }
    
    return 0;
}