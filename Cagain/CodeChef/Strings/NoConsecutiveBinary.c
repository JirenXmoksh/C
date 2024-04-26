#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int n;
        printf("Enter the size of string: ");
        scanf("%d", &n);
        char binstr[n];
        printf("Enter the binary string: ");
        scanf("%s", &binstr);
        int paircount = 0;
        for(int i=0; i<n; i+=1){
            if(binstr[i]==binstr[i+1]) paircount++;
        }
        printf("%d operations needed to be performed such that no consecutive elements are equal\n\n", paircount);
    }
}

