#include<stdio.h>
#include<string.h>


void concat(char* str1, char* str2);
int main(){
    printf("Enter the first string: ");
    char str1[100];
    scanf("%s", str1);

    printf("Enter the second string: ");
    char str2[100];
    scanf("%s", str2);

    printf("The concatenated strings are: ");

    concat(str1, str2);

    return 0;
}

void concat(char* str1, char* str2){

    int len = strlen(str1) + strlen(str2);

    char catstr[len+1];

    for(int i=0; i<strlen(str1); i++){
        catstr[i] = str1[i];
    }
    for(int i=0; i<strlen(str2); i++){
        catstr[i+strlen(str1)] = str2[i];
    }
    catstr[len] = '\0';
    printf("\n%s", catstr);
}