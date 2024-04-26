#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
    printf("Enter the number of test cases: ");
	scanf("%d", &t);
    printf("\n");
	while(t--){
	    int n;
        printf("Enter the size of DNA sequence: ");
	    scanf("%d", &n);
	    char seq[n];
        printf("Enter the sequence(in caps): ");
	    scanf("%s", seq);
	    for(int i=0; i<n; i++){
	        if(seq[i]=='A') seq[i] = 'T';
	        else if(seq[i]=='T') seq[i] = 'A';
	        else if(seq[i]=='C') seq[i] = 'G';
	        else if(seq[i]=='G') seq[i] = 'C';
	    }
        printf("The complementary DNA strand to the entered sequence is: ");
	    puts(seq);
	    printf("\n");
	}

}

