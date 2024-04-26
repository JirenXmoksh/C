// PRACTICAL 14
// Write the program to print the following pattern: 
// 1  2    3     4    5     6 
// 2  4    6     8    10   12 
// 3  6    9    12   15   18 
// 4  8    12  16   20   24 
// 5  10  15  20   25   30 
// 6  12  18  24   30   36
#include <stdio.h>

int main() {
    int rows = 6;
    int cols = 6;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%-4d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}