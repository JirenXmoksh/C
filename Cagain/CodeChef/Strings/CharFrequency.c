#include <stdio.h>
// code to find the frequency of each character
// (STRING GAME problem 1102 rating)
int main(void) {
	// your code goes here
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        
        char str[n+1];
        scanf("%s", str);
        
        // all we have to check is that if every character occurs even number of times.
        int charfreq[26] = {0};
        // initialized a frequency array
        for(int i=0; i<n; i++){
            charfreq[str[i] - 'a']++;
        }
        // for(int i=0; i<26; i++){
        //     printf("%d ", charfreq[i]);
        // }
        int flag = 1;
        for(int i=0; i<26; i++){
            if(charfreq[i]%2!=0) {
                flag = 0;
                break;
            }
        }
        if(flag==0) printf("NO\n");
        else printf("YES\n");
    }
}

