#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    
    while(t--){
        char str[1001];
        printf("Enter a string: ");
        scanf("%s", str);
        int vowcount = 0;
        int maxvow = -1;
        for(int i=0; i<strlen(str); i++){
            if(maxvow<vowcount) maxvow = vowcount;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') vowcount++;
            else vowcount = 0;
        }
         if(maxvow>2) printf("Happy because a substring of more than 2 consecutive vowels\n\n");
         else printf("Sad because no substring of more than 2 consecutive vowels\n\n");
        //printf("%d\n", maxvow);
    }
}

