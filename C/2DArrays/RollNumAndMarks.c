#include<stdio.h>
int main(){
    int stu;
    //int marksp, marksm, marksc;
    printf("Enter the number of students: ");
    scanf("%d", &stu);
    int arr[stu][3];
    for(int i=0; i<=stu-1; i++){
         printf("Student %d\n", i+1);
        for(int j=0; j<=2; j++){
           printf("Enter marks: ");
           scanf("%d", &arr[i][j]);
            }
            // printf("Enter marks of Maths: ");
            // scanf("%d", &arr[i][j]);
            // printf("Enter marks of Chemistry: ");
            // scanf("%d", &arr[i][j]);
        }
    printf("\n");
    for(int i = 0; i<=stu-1; i++){
        for(int j=0; j<=2; j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }
    return 0;
}