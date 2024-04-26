#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    printf("Enter name: ");
    gets(name);
    int i= 0;
    while(name[i]!='\0'){
        printf("%c", name[i]);
        i++;
    }
    return 0;
}
