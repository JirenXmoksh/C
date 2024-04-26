#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d", &n,&k);
   
    int ANDmax = -1;
    int ORmax = -1;
    int XORmax = -1;

    for(int i=1; i<=k; i++){
        for(int j=i+1; j<=n; j++){
            int ans  = i&j;
            if(ans>ANDmax && ans<k){
                ANDmax = ans;
            }
        }
    }
    printf("%d\n", ANDmax);

    for(int i=1; i<=k; i++){
        for(int j=i+1; j<=n; j++){
            int ans = i|j;
            if(ans>ORmax && ans<k){
                ORmax = ans;
            }
        }
    }
    printf("%d\n", ORmax);

    for(int i=1; i<=k; i++){
        for(int j=i+1; j<=n; j++){
            int ans = i^j;
            if(ans>XORmax && ans<k){
                XORmax = ans;
            }
        }
    }
    printf("%d\n", XORmax);
    return 0;
}