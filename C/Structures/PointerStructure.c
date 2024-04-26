#include<stdio.h>
#include<string.h>
typedef struct Pokemon{
             int hp;
             int speed;
             int attack;
             char tier; 
             char name[];
}Pokemon;

int main(){
Pokemon pikachu;  //Pokemon is a user defined data type just like 'int', 'char' etc, and pikachu is a container just like 'x', 'ch' etc.
                // A big container(class) called Pokemon was created
                //which can store any number of pokemons(objects) with the specified 
                //number of sub boxes(members)
pikachu.hp=60;
pikachu.speed=100;
pikachu.tier = 'A';
pikachu.attack=70;
strcpy(pikachu.name,"Pikachu");

Pokemon* x = &pikachu; // The address of pikachu's hp is stored
printf("%p\n", &pikachu.hp); 
printf("%p\n", &pikachu.speed);
printf("%p\n", &pikachu.attack);
printf("%p\n", &pikachu.tier);
printf("%p\n", &pikachu.name);
printf("%p", x); // Address of the whole pikachu box is same as that of the first element i.e: hp

    return 0;
}