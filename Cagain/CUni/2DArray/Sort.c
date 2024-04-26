// #include <stdio.h>

// void sort2DArray(int arr[][3], int rows, int cols) {
//     // Flatten the 2D array into a 1D array
//     int temp[rows * cols];
//     int k = 0;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             temp[k++] = arr[i][j];
//         }
//     }

//     // Sort the 1D array
//     for (int i = 0; i < rows * cols - 1; i++) {
//         for (int j = 0; j < rows * cols - i - 1; j++) {
//             if (temp[j] > temp[j + 1]) {
//                 int swap = temp[j];
//                 temp[j] = temp[j + 1];
//                 temp[j + 1] = swap;
//             }
//         }
//     }

//     // Copy the sorted elements back to the 2D array
//     k = 0;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             arr[i][j] = temp[k++];
//         }
//     }
// }

// int main() {
//     int arr[][3] = {{9, 2, 5}, {7, 1, 8}, {3, 6, 4}};
//     int rows = sizeof(arr) / sizeof(arr[0]);
//     int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

//     printf("Before sorting:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     sort2DArray(arr, rows, cols);

//     printf("\nAfter sorting:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }