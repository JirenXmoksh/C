#include<stdio.h>
int main(){

    float Kmdist;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &Kmdist);

    printf("%.2f kms are %.2f meters\n",Kmdist, Kmdist*1000);
    printf("%.2f kms are %.2f centimeters\n",Kmdist, Kmdist*100000);
    printf("%.2f kms are %.2f inches\n",Kmdist, (Kmdist*100000)/2.54);
    printf("%.2f kms are %.2f feet\n",Kmdist, ((Kmdist*100000)/2.54)/12);
    
    return 0;
}