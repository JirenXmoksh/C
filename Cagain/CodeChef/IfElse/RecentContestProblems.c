#include <stdio.h>
#include<string.h>

int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
    printf("\n");
	while(t--){
	    int n;
        printf("Enter the number of problems: ");
	    scanf("%d", &n);
	    int scount = 0;
	    int lcount = 0;
	    char str[10];
        printf("Enter the names of problems: ");
	    for(int i=0; i<n; i++){
	        scanf("%s", str);
	        if(str[0]=='S') scount++;
	        else if(str[0]=='L') lcount++;
	    }
	   
	    printf("Problem 1 appeared %d times and Problem 2 appeared %d times\n\n", scount, lcount);
	   
	}

}

