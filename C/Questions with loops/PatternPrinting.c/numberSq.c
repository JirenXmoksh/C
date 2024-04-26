#include<stdio.h>
int main(){int n;
printf("Enter the number of rows & columns we want to see in the number square: ");
scanf("%d", &n);
    for(int i=1; i<=n; i++){// outer loop is responsible to repeat the number of times the inner loop works.
       for(int j=1; j<=n; j++){// inner loop is responsible for printing 1234.
        printf("%d ", j);
    }printf("\n");
    }
    
    return 0;
}