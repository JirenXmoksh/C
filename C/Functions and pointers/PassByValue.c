 #include<stdio.h>
 void swap(int a, int b);
 int main(){
    int a; 
    printf("Enter a: ");
    scanf("%d", &a);
    int b; 
    printf("Enter b: ");
    scanf("%d", &b);
    swap(a, b);
    printf("The swapped value of a(unswapped actually) is: %d\n", a);
    printf("The swapped value of b(unswapped actually) is: %d", b);
    return 0;
 }
 void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The swapped value of a in the function is: %d\n", a);
    printf("The swapped value of b in the function is: %d\n", b);
return;
 }