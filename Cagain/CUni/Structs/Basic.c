#include<stdio.h>
int main(){
    struct Patient{
        float height;
        int weight;
        int age;
    } p1;

    p1.height = 175;
    p1.weight = 67;
    p1.age = 19;

    printf("%.2f %d %d", p1.height, p1.weight, p1.age);
    return 0;
}