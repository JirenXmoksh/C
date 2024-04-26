#include<stdio.h>
#include<string.h>
int btod(char* string);
int main(){
    char str1[]="10101";
    int value1 = btod(str1);
    printf("The decimal value of %s is: %d\n", str1, value1);

    char str2[]="11101";
    int value2 = btod(str2);
    printf("The decimal value of %s is: %d\n", str2, value2);

    char str3[]="11111";
    int value3 = btod(str3);
    printf("The decimal value of %s is: %d\n", str3, value3);
    return 0;
}
int btod(char* string){
    int total=0;
    int decval=1;
    int slength = strlen(string);
    for(int i=slength-1; i>=0; i--){
        if(string[i]=='1') {total+= decval;}
        decval*=2;
    }
    return total;
}