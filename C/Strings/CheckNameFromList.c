#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0


int main(){
    
    char masterList[6][10] = {"Moksh", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"};

    char yourname[10];
    printf("Enter your name: ");
    scanf("%s", yourname);

    int flag, a;
    flag = NOTFOUND;
    for(int i=0; i<=5; i++){
        a = strcmp(&masterList[i][0], yourname);
        if(a==0){
            printf("\nWelcome, you can enter the palace <3");
            flag = FOUND;
            break;
        }
    }
    if(flag==NOTFOUND){
        printf("\nSorry, you are not permitted");
    }

    return 0;
}