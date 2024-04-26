#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 
    char chr;
    scanf("%c", &chr);
    printf("%c",chr);
    
    char str1[100];
    scanf("%s",str1);
    printf("\n%s",str1);

    char str2[40];
    scanf("\n%[^\n]%*c", str2);   
    printf("\n%s", str2);

return 0;
}