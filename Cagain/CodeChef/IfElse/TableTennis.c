#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int sca, scb;
        scanf("%d %d", &sca, &scb);
        if(((sca+scb)%4==0) || ((sca+scb)%4==1)){
            printf("Alice\n");
        }
        else printf("Bob\n");
        
        
    }

}

