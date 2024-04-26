#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int mushrooms;
        scanf("%d", &mushrooms);
        
        int n = (mushrooms - 1)/3;
        
        if(mushrooms%3==0) printf("NORMAL\n");
        else if(mushrooms % 3 == 1) printf("HUGE\n");
        else printf("SMALL\n");
        
        }
        return 0;
}



