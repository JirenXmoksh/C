#include <stdio.h>
#include<limits.h>
//smallest test cases in which code failed i.e. caseStr[i] = '0'
int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while (t--) {
        int n;
        printf("Enter the number of questions: ");
        scanf("%d", &n);
        int s[n];
        printf("Enter the number of test cases for each question: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &s[i]);
        }
        char caseStr[n];
        printf("Enter the run or fail sequence (0 or 1): ");
        scanf("%s", caseStr);
        
        int min = 1000;
        for(int i=0; i<n; i++){
            if(caseStr[i]=='0'){
                if(min>s[i]) min = s[i];
            }
            //else continue;
        }
        printf("%d is the smallest test case size which the code failed to run on\n\n", min);
    }
    
    return 0;
}
