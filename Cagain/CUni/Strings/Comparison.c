#include<stdio.h>
#include<string.h>

int compare(char* str1, char* str2);

int main(){
    printf("Enter the first string: ");
    char str1[100];
    scanf("%s", str1);

    printf("Enter the second string: ");
    char str2[100];
    scanf("%s", str2);


    int ans = compare(str1, str2);

    if(ans==1) printf("The strings are same");
    else printf("The strings are different");
    
    return 0;
}

int compare(char* str1, char* str2){

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1!=len2) return 0;
    else{
        int flag = 1;
        for(int i=0; i<len1; i++){
            if(str1[i]!=str2[i]){
                flag = 0;
                break;
            }
        }
        if(flag==1) return 1;
        else return 0;
    }
  
}