#include<stdio.h>
#include<string.h>

int main(){

    char str[1001];
    scanf("%s", str);
    // str[strlen(str)-1] += 1;
    // if(str[strlen(str)-1]==':') str[strlen(str)-1]='0';
    int i = 0;
    str[strlen(str) - 1] += 1;
    while((strlen(str) - i)>0){
        
        
        if(str[strlen(str)-i]=='9') {
            str[strlen(str)-i]='0';
            str[strlen(str)-i-1] +=1;
        }
        i++;
    }
    printf("%s", str);


    // int i = 1;
    // while(i<=10){
    //     printf("%d ", i);
    //     i++;
    //}


    // int i = 1;
    // do{
    //     if(i%2==0)
    //     printf("%d ", i);
    //     i++;
    // }
    // while(i<16);

}
