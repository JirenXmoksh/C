#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        scanf("%d", &n);
        char str[n];
        printf("Enter a string: ");
        scanf("%s", str);
        int conscount = 0;
        int maxcons = -1;

        for(int i=0; i<n; i++){
           
            if(str[i]!='a' && str[i]!='e' && str[i]!='o' && str[i]!='i' && str[i]!='u'){
                conscount++;
                
            }
            else {
                conscount=0;
            }
            if(maxcons<conscount) maxcons = conscount;
        }
        if(maxcons>=4) printf("The string is hard to pronounce\n\n");
        else printf("The string is easy to pronounce\n\n");
        //printf("%d\n", maxcons);
        
    }
}

