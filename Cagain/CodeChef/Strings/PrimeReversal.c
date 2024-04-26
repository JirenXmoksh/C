#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the size of strings: ");
        scanf("%d", &n);
        char arr[n+1];
        char brr[n+1];
        
        printf("Enter the first string: ");
        scanf("%s", arr);
        printf("Enter the second string: ");
        scanf("%s", brr);
        
        int zeroCount1 = 0;
        int zeroCount2 = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i]=='0') zeroCount1++;
            if(brr[i]=='0') zeroCount2++;
        }
       
        //printf("%d %d\n", zeroCount1, zeroCount2);
        if(zeroCount2==zeroCount1) printf("YES the strings can be made equal using any number of operations\n\n");
        else printf("NO the strings cannot be made equal using any number of operations\n\n");
    }
}

