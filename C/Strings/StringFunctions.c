#include<stdio.h>
#include<string.h>
int main(){
    // 1. 'strlen'
    // char* str = "Moksh Singh";
    // int x = strlen(str);
    // printf("%d", x);

    // 2. 'strcpy' -> Deep copy
    // char s1[10] = "Moksh";
    // char s2[10];
    // strcpy(s2, s1); (destination, source)
    // s2[0] = 'J';
    // printf("%s\n", s1);
    // printf("%s", s2); //Deep copied

    // 3. 'strcat' -> Concatinate(join)
    char s1[] = "Moksh";
    char s2[] = "Singh";
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}