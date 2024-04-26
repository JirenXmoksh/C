#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while(t--){
        unsigned long long start, end;
        printf("Enter the starting and the ending: ");
        scanf("%lld %lld", &start, &end);
        if(start==1) start = 2;
        for(int i=start; i<=end; i++){
            int c = 1;
            for(int j=2; j<=sqrt(i); j++){
                if(i%j==0){
                    c = 0;
                    break;
                }
            }
            if(c==1) printf("%d\n", i);
        }
        printf("\n");
    }
}

