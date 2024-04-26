#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    printf("\nEnter the number of test cases: ");
    scanf("%d", &t);
    printf("\n");
    while(t--){
        int arr[3];
        printf("Enter the number of votes recieved by the respective parties: ");
        for(int i=1; i<=3; i++){
            scanf("%d", &arr[i]);
        }
        int party;
        int flag = 0;
        for(int i=1; i<=3; i++){
           if(arr[i]>50) {
               party = i;
               flag++;
           }
        }
        if(flag==1){
            if(party==1) printf("Party A won by clear majority\n\n");
            else if(party==2) printf("Party B won by clear majority\n\n");
            else if(party==3) printf("Party C won by clear majority\n\n");
        }
        else printf("NOTA\n\n");
    }
}

