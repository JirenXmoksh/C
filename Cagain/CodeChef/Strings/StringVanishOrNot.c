#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int n;
        printf("Enter the size of string: ");
        scanf("%d", &n);
        char str[n];
        printf("Enter the string: ");
        scanf("%s", str);
        
        char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        int flag = 1;
        
        for(int i=0; i<26; i++){
            int counter = 0;
            for(int j=0; j<n; j++){
                if(alphabets[i]==str[j]) counter++;
            }
            if(counter%2!=0){
                flag = 0;
                break;
                
            }
        }
        if(flag==0){
            printf("No, the string cannot be erased\n\n");
        }
        else printf("Yes, the string can be erased\n\n");
    }
}

