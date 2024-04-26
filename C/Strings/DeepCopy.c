#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "College Wallah";
   printf("The first string is : %s\n", s1);
    int size = 0;
    int k = 0;
    while(s1[k]!='\0'){
        size++;
        k++;
    }
    char s2[size];
    for(int i=0; i<=size; i++){
        s2[i] = s1[i];  //Each element of s1 is 'deep copied' to s2
    }
     printf("The second string is : %s", s2);
    return 0;
}