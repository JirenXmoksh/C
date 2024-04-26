#include<stdio.h>
#include<string.h>
typedef union Pokemon  //Only one member can be accessed at a time, that too, the last one 
                        // written in the struct declarations, here, name!
    {//Union takes up the memory corresponding to the largest variable, i.e: here it is name
    // with 15 bytes, and it overwrites each member in sequence, like, hp is over
    //-written by speed, speed by attack, and so on till the last one, name.
    //Whereas in a struct, the total memory is taken up is the sum of 
    // requirements of each member.
        int hp;
        int speed;
        int attack;
        char tier; 
        char name[15];
    }Pokemon; 

int main(){
 Pokemon Pikachu;   
 Pikachu.hp = 60;
 Pikachu.speed = 70;
 Pikachu.attack = 100;
 Pikachu.tier = 'A';
 strcpy(Pikachu.name,"Pikachu");
 
 printf("HP: %d\n", Pikachu.hp);
 printf("Speed: %d\n", Pikachu.speed);
 printf("Attack: %d\n", Pikachu.attack);
 printf("Tier: %c\n", Pikachu.tier);
 printf("Name: %s\n", Pikachu.name);

    return 0;
}