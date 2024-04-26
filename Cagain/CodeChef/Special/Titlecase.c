#include <stdio.h>
#include<ctype.h>

int main(void) {
	
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    t++; // because gets was running for one number less
    while(t--){
        
        char str[1001];
        // scanf("%[^\n]%*c", str);
      
        gets(str);
        str[0] = toupper(str[0]);
        for(int i=0; i<1001; i++){
            if(str[i] == ' ') str[i+1] = toupper(str[i+1]);
        }
        
        printf("%s\n\n", str);
      
    }
    
}
