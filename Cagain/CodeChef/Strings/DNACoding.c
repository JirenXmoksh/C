#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        char ans[n];
        int i=0;
        while(s[i]!='\0'){
            if(s[i]=='0' && s[i+1]=='0') ans[i] = 'A';
            else if(s[i]=='0' && s[i+1]=='1') ans[i] = 'T';
            else if(s[i]=='1' && s[i+1]=='0') ans[i] = 'C';
            else if(s[i]=='1' && s[i+1]=='1') ans[i] = 'G';
            i+=2;
        }
            
        
        for(int j=0; j<n; j+=2){
            printf("%c", ans[j]);
        }
        printf("\n");
        
    }

    return 0;
}
