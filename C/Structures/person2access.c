#include<stdio.h>
#include<string.h>
// Access the structure variables using pointers
typedef struct Person{
    int age;
    double weight;
}Person;

int main(){
    Person p1;
    Person* x = &p1;
    (*x).age = 25;  //We can access any element of the object 'p1' using just its starting address!
    printf("%d", p1.age);
    (*x).weight = 70;
    printf("%d", p1.weight);
    return 0;
}
