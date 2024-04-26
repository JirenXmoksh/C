#include<stdio.h>
int main(){
int marks[10];
for(int i=0; i<=9; i++){
    printf("Enter marks of student %d: ", i+1);
    scanf("%d", &marks[i]);
}
printf("The students who have failed are, numbers: ");
for(int i=1; i<=9; i++){
    if(marks[i]<35){
    printf("%d ", i+1);
}
}
   return 0;
}