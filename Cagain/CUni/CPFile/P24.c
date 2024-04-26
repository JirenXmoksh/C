// PRACTICAL 24
// Write a menu driven C program to show the use of in-built string 
// functions like strlen, strcat, strcpy, strcmp, strrev etc.  

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void len();
void concat();
void cmp();
void rev();

int main(){
    
    printf("\nHere is a list of the string functions which you can try:\n1. strlen()\n2. strcat()\n3. strcmp()\n4. strrev()\n");

    int choice;
   

    while(1){
         printf("\n\nEnter a number corresponding to the function as given in the list which you want to try: ");
        scanf("%d", &choice);
        if(choice > 4 || choice < 1) {
            printf("Exited!\n");
            exit(1);
        }
        if(choice==1) len();
        else if(choice==2) concat();
        else if(choice==3) cmp();
        else if(choice==4) rev();
    }

    return 0;
}

void len(){

    printf("\nYou chose to find the length of a string!\nNow, enter a string: \n");
    char str[1000000];
    scanf(" %[^\n]", str);

    printf("\nThe length of the string you entered is: %d", strlen(str));
    
    return;
}

void concat(){
    char str1[1000000], str2[1000000];
    printf("\nGreat! Your choice was to try concatenate two strings.\n");
    printf("Enter the first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    printf("\nThe strings concatenated: %s", strcat(str1, str2));

    return;

}
void cmp(){
    char str1[1000000], str2[1000000];
    printf("\nNice! Your choice was to try compare two strings.\n");
    printf("Enter the first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    int ans = strcmp(str1,str2);
    if(ans==0) printf("\nThe strings you entered were same!");
    else printf("\nThe strings you entered were different!");

    return;
}
void rev(){
    printf("\nYou chose to reverse a string!\nNow, enter the string: \n");
    char str[1000000];
    scanf(" %[^\n]", str);

    printf("\nThe length of the string you entered is: %s", strrev(str));
    
    return;
}
