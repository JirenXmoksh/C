#include<stdio.h>
int main(){
    int cp, sp;
    printf("Enter the cost and selling price as space seperated: ");
    scanf("%d %d", &cp, &sp);
    if(cp>sp){
        printf("Loss incurred, %d rupees", cp-sp);
    }
    else if(cp<sp){
        printf("Profit made, %d rupees", sp-cp);
    }
    else printf("Neither profit nor loss");
    return 0;
}