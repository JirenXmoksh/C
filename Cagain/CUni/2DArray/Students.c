#include<stdio.h>
int main(){

    int stud[4][2];

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<2; j++){
    //             scanf("%d", &stud[i][j]);
    //     }
    
    for(int i=0; i<4; i++){
        printf("Enter the roll number and marks: ");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }
   
    for(int i=0; i<4; i++){
        printf("%d %d\n", stud[i][0], stud[i][1]);
    }
        
    return 0;
}