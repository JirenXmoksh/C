#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int n, x, ans, tans;
        int digcount = 0;
        scanf("%d %d", &n, &x);
        ans = n*x;
        tans = ans;
        while(tans!=0){
            digcount += 1;
            tans/=10;
        }
        
        if(digcount!=5) printf("NO\n");
        
        else if(digcount==5){
            int msb;
            msb = ans/10000;
           
            
            if(msb!=0) printf("YES\n");
            else printf("NO\n");
        }
    
    }
    // int a = 04123/10000;
    // printf("%d", a);
}
