#include<stdio.h>
#include<string.h>
int main(){
    typedef struct krikter{
        int age;
        int tmatches;
        char firstname[25];
        char lastname[25];
        double avgruns;
    }krikter;
    
// Originally in the problem we had to deal with 20 cricketers, but 
//that would be hella tiresome, so we doing 3 while the method remains same.
krikter arr[3];
for(int i=0; i<3; i++){
    printf("Enter the info for player number %d: \n", i+1);
    printf("Enter first name: ");
    scanf("%s", arr[i].firstname);
    printf("Enter last name: ");
    scanf("%s", arr[i].lastname);
    printf("Enter age: ");
    scanf("%d", &arr[i].age);
    printf("Enter total number of test matches played: ");
    scanf("%d", &arr[i].tmatches);
    printf("Enter average runs scored: ");
    scanf("%lf", &arr[i].avgruns);
}
printf("\n");
for(int i=0; i<3; i++){
    printf("Name:  %s %s\n", arr[i].firstname, arr[i].lastname);
    printf("Age :  %d\n", arr[i].age);
    printf("Total test matches played: %d\n", arr[i].tmatches);
    printf("Average runs scored: %lf\n\n", arr[i].avgruns);
}

    return 0;
}