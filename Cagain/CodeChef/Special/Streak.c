#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Om
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]); // Addy
        }
        
        int OMstreak = 0;
        int om = 0;
        for(int i=0; i<n; i++){
            
                if(a[i]>0){
                    OMstreak++;
                }
                
                else{
                    if(om<OMstreak){
                        om = OMstreak;
                    }
                    OMstreak = 0;
                    
                    
                }
            
        }
         if(om < OMstreak) { // Update after the loop in case the last streak is the maximum
            om = OMstreak;
        }
        int Astreak = 0;
        int addy = 0;
        for(int i=0; i<n; i++){
            
                if(b[i]>0){
                    Astreak++;
                }
                
                else if(b[i]==0){
                    if(addy<Astreak){
                        addy = Astreak;
                    }
                    Astreak = 0;
                }
            
        }
         if(addy < Astreak) { // Update after the loop in case the last streak is the maximum
            addy = Astreak;
        }
        // if(om==-1) printf("%d\n", OMstreak);
        // else{
        //     printf("%d\n", om);
        // }
        // if(addy==-1) printf("%d\n", Astreak);
        // else{
        //     printf("%d\n", addy);
        // }
        if(om>addy) printf("om\n");
        else if(om<addy) printf("addy\n");
        else printf("draw\n");
        
        
    }
    

}
