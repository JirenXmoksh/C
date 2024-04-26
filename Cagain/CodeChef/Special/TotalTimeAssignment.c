#include <stdio.h>

int main(void) {
    
    int t;
    unsigned long long n, breaktime, timeperproblem;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        printf("Enter the number of problems, the break duration, and time elapsed per problem: ");
        scanf("%lld %lld %lld", &n, &breaktime, &timeperproblem);
        unsigned long long totaltime = 0;
        while(n!=0){
            
            if(n%2==0){
                totaltime += timeperproblem*(n/2);
                timeperproblem*=2;
                n/=2;
                //printf("%lld\n", totaltime);
            }
            else{
                totaltime += timeperproblem*((n+1)/2);
                timeperproblem *= 2;
                n -= (n+1)/2;
                //printf("%lld\n", totaltime);
            }
            if(n>0) totaltime += breaktime;
        }
        //totaltime -=1;
        printf("%lld minutes will be taken in total for chef to complete his assignment with the given conditions\n\n", totaltime);
    }
}

