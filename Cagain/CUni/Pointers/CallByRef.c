#include<stdio.h>
void swap(int* a, int*b);
int main(){
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swapping: %d %d\n", a,b);
    swap(&a, &b);
    printf("\nNumbers after swapping: %d %d\n", a,b);
    return 0;
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}