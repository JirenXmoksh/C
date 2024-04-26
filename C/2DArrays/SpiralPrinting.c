#include<stdio.h> 
int main(){
   int r,c;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   printf("Enter the number of columns: ");
   scanf("%d", &c);
    int arr[r][c] ;
    // Taking inputs
    printf("Enter elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    //Displaying the array
    printf("The array is: \n");
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          printf("%d ", arr[i][j]);
        }printf("\n");
    }printf("\n");
    //Spiral Print

    int minrow=0;
    int maxrow=r-1;
    int mincol=0;
    int maxcol=c-1;
    int TnE = r*c;
    int count = 0;
    while(count<=TnE){
        //Print the elements of 'minrow', from mincol to maxcol
        for(int j=mincol; j<=maxcol; j++){
            printf("%d ", arr[minrow][j]); // All the elements of minrow are
                                           // to be printed from mincol to maxcol
                                           // which is stored in 'j'
        count++; // Increase count with each iteration
        }
        minrow++; //Shift the minrow by one, down
         if(count>=TnE) break;
        // Now print the elements of 'maxcol', from minrow to maxrow
        for(int i=minrow; i<=maxrow; i++){
            printf("%d ", arr[i][maxcol]);
             count++;
        }
        maxcol--; //Shift the maxcol by one to the left
         if(count>=TnE) break;
        // Print the elements of 'maxrow', in reverse, from maxcol to mincol
        for(int j=maxcol; j>=mincol; j--){
            printf("%d ", arr[maxrow][j]);
             count++;
    } 
    maxrow--; // Shift the maxrow by one, up
         if(count>=TnE) break;
     // Print the elements of 'mincol', in reverse, from maxrow to minrow
        for(int i=maxrow; i>=minrow; i--){
            printf("%d ", arr[i][mincol]);
             count++;
        }
        mincol++; // Shift the mincol by one to the right.
        }

    return 0;
}