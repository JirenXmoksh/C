#include<stdio.h>

// void display(int* j, int n);

// void main(){
//     int arr[] = {1,2,3,4,5};
//     display(&arr[0], 5);
// }
// void display(int* j, int n){
//     // for(int i=0; i<n; i++){
//     //     printf("%d\n", *j);
//     // }
//     while(n--){
//         printf("%d ", *j);
//         j++;
//     }
// }

void display(int* j, int n);

int main(){
    int arr[] = {1,2,3,4,5};
    display(arr, 5);

}
void display(int* j, int n){
    for(int i=0; i<n; i++){
        printf("%d ", *(j+i));
    }
    
}