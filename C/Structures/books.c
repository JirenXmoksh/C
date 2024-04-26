#include<stdio.h>
#include<string.h>
int main(){
    struct books{
        char name[50];
        int pages;
        float price;
    }a,b,c;
 
a.pages = 100;
a.price = 411.5;
strcpy(a.name, "Secret seven");
printf("%d\n",a.pages);
printf("%f\n",a.price);
printf("%s\n",a.name);

b.pages = 200;
b.price = 100;
strcpy(b.name, "Gulliver's Travel");
printf("%d\n",b.pages);
printf("%f\n",b.price);
printf("%s\n",b.name);

c.pages = 100;
c.price = 411.5;
strcpy(c.name, "Beehive");
printf("%d\n",c.pages);
printf("%f\n",c.price);
printf("%s\n",c.name);

    return 0;
}