#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        int minstix, stixperplate, tmoney;
        printf("Enter the minimum number of sticks to be eaten, sticks per plate and money for each stick: ");
        scanf("%d %d %d", &minstix, &stixperplate, &tmoney);
        if(tmoney!=0){
            int stixate = minstix + (tmoney/30);
            if(stixate%stixperplate==0) printf("Chef ordered %d plates extra\n\n", stixate/stixperplate);
            else printf("%d\n", stixate/stixperplate+1);
        }
        else{
            if(minstix%stixperplate==0) printf("Chef ordered %d plates extra\n\n", minstix/stixperplate);
            else printf("Chef ordered %d plates extra\n\n", minstix/stixperplate+1);
        }
        
    }
}

