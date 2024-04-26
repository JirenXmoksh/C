#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int num1,num2,num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        if( (num1<num2 || num1<num3) && (num1>num3 || num1>num2) ) printf("%d\n", num1);
        else if( (num2<num1 || num2<num3) && (num2>num1 || num2>num3) ) printf("%d\n",num2);
        else printf("%d\n", num3);
    }
}

