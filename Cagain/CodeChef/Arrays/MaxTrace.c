#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n][n];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        int max = -1;
        for(int i=1; i<=n; i++){
            int DiaSum = 0;
            for(int j=1; j<=n; j++){
                if(i==j || (i+j)%2!=0){
                    DiaSum+=arr[i][j];
                }
            }
            if(max<DiaSum) max = DiaSum;
        }
        printf("%d\n", max);
    }
}

