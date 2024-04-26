#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int n;
        printf("Enter the number of rounds played: ");
        scanf("%d", &n);
        
        char str[n+1];
        printf("Enter the codes for rounds won by alice or bob as A or B: ");
        scanf("%s", str);

        // Your code goes here
        
        // Alice the server first, point increase only when you are the server and you
        // won the round.
        
        char server = 'A';
        int Apt = 0;
        int Bpt = 0;
        for(int i=0; i<strlen(str); i++){
            if(server=='A'){
                if(str[i]=='A'){
                    Apt+=1;
                    server = 'A';
                }
                else if(str[i]=='B'){
                    server = 'B';
                }
            }
            else if(server=='B'){
                if(str[i]=='B'){
                    Bpt+=1;
                    server = 'B';
                }
                else if(str[i]=='A'){
                    server = 'A';
                }
            }
           
        }
         printf("Alice: %d Bob: %d\n\n", Apt, Bpt);
    }

    return 0;
}
