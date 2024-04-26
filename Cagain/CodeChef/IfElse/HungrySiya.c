#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
     printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
       int balance, pizza, burger;
       printf("Enter the balance, cost of pizza and cost of burger: ");
       scanf("%d %d %d", &balance, &pizza, &burger);
       
       if(pizza>balance && burger>balance) printf("Siya can eat NOTHING :(\n\n");
       
       else if(pizza>balance && burger<=balance) printf("Siya can eat BURGER :D\n\n");
       
       else if(pizza<=balance && burger>balance) printf("Siya can eat PIZZA ;)\n\n");
       
       else if(pizza<=balance && burger<=balance) printf("Siya will eat PIZZA :P\n\n");
    
    }
}


