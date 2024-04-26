#include <stdio.h>

int main(void) {
	int t;
    printf("\nEnter the number of test cases: ");
	scanf("%d", &t);
    printf("\n");
	while(t--){
	    int days, protperday;
        printf("Enter the total days and protein intake per day: ");
	    scanf("%d %d", &days, &protperday);
	   
	    int arr[days];
        printf("Enter protein intake on all days: ");
	    for(int i=0; i<days; i++){
	        scanf("%d", &arr[i]);
	    }
	    int remprot = 0;
	    int c = 1;
	    int day;
	    for(int i=0; i<days; i++){
	        remprot += arr[i];
	        remprot -= protperday;
	        if(remprot<0) {
	            c = 0;
	            day = i;
	            break;
	        }
	       //printf("%d ", remprot);
	    }
	    if(c==0) printf(" No, chef will not be able to complete his protein intake on day %d\n\n", day+1);
	    else printf(" Yes, chef will be able to complete his protein intake on all days\n\n");
	}
    //printf("\n");
}

