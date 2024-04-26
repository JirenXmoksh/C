#include<stdio.h>
#include<string.h>

// from the CheckNameFromList.c, swap the positions of "Raman" and "Srinivas"
int main(){
    // SELF

    // char masterList[6][10] = {"Moksh", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"};
    
    // printf("The list before changing: ");
    // for(int i=0; i<6; i++){
    //     for(int j=0; j<strlen(masterList[i]); j++){
    //         printf("%c", masterList[i][j]);
    //     }printf("   ");
    // }
    // printf("\nEnter the positions of the names you want to interchange: ");

    // int p1, p2;
    // scanf("%d %d", &p1, &p2);

    // char temp[10];
    // strcpy(temp, &masterList[p1-1][0]);
    // strcpy(&masterList[p1-1][0],&masterList[p2-1][0] );
    // strcpy(&masterList[p2-1][0], temp);

    // for(int i=0; i<=5; i++){
    //     for(int j=0; j<strlen(masterList[i]); j++){
    //         printf("%c", masterList[i][j]);
    //     }printf("   ");
    // }

    // CLASS

    char* names[] = {"Moksh", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"}; // stores the addresses of all the elements even though they are not stored contiguously
    
    char* temp; // here we did not need to make 'temp' as an array, rather a normal pointer variable
    printf("\nOriginal: %s %s", names[2], names[3]);
    temp = names[2];
    names[2] = names[3];
    names[3] = temp;

    printf("\nNew: %s %s", names[2], names[3]);


    return 0;
}