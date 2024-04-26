#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[35];
        int age;
        int salary;
    }p1,p2;
 
p1.age = 23;
p1.salary = 90,000;
strcpy(p1.name, "John Xina");
//printf("%d\n",p1.age);
printf("First persons's name is: %s\n",p1.name);

p2.age = 24;
p2.salary = 75,000;
strcpy(p2.name, "Rauul");
printf("Age of the second person is: %d\n",p2.age);
//printf("%s\n",p2.name);

    return 0;
}