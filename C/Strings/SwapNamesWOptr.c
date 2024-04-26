#include<stdio.h>
#include<string.h>

// from the CheckNameFromList.c, swap the positions of "Raman" and "Srinivas"
int main(){
    
    char masterList[6][10] = {"Moksh", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"};
    
    printf("The list before changing: ");
    for(int i=0; i<6; i++){
        for(int j=0; j<strlen(masterList[i]); j++){
            printf("%c", masterList[i][j]);
        }printf("   ");
    }
    int i;
    char t;
    printf("\nOriginal: %s %s", masterList[2], masterList[3]);

    for(int i=0; i<10; i++){
        t = masterList[2][i];
        masterList[2][i] = masterList[3][i];
        masterList[3][i] = t;
    }

    printf("\nNew: %s %s", masterList[2], masterList[3]);



    return 0;
}