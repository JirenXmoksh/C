#include<stdio.h>

int main(){
    // int s[4][2] = {1234, 56, 1212, 53, 1434, 80, 1312, 78};
    // int (*P)[2];
    // int i, j, *Pint;
    // for(int i=0; i<=3; i++){
    //     P = &s[i];
    //     Pint = (int*)P;
    //     printf("\n");
    //     for(int j=0; j<=1; j++){
    //         printf("%d ", *(Pint + j));
    //     }
    // }
    
    // Its okay if we do not specify the row number if we initialize with declaration but if we do not initialize,
    // only declaration, that requires both row and column.

    int n[][3] = {2,4,3,6,8,5,3,5,1};
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            // printf("\n%d %d", n[i][j], *(*(n+i)+j) ); // for values
            printf("\n%d %d", n[i][j], *(n+i)+j ); // for addresses
        }
    }

    // int n[9] = {2,4,3,6,8,5,3,5,1};
    // int i, j;
    // for(i=0; i<9; i++){
        
    //            printf("\n%d %d", n[i], (n+i) ); // for addresses
    //         printf("\n%d %d", n[i], *(n+i) ); // for values    
    // }
    return 0;
}
