#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Physics Wallah";
    char* s2 = s1;
    s1[0] = 'M';
    printf("%s", s2); //Here s2 points to the same character array and any change in s1 reflects a change in s2 also
    return 0;
}