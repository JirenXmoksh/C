#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50];
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c",str);
    int len = 0;
    int i = 0 ;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    //printf("%d", len);
    for (int i=0; i<=len; i++){
        printf("%c", str[i]);
        if(str[i]==' '){
            printf("\n");
        }
    }
    return 0;
}