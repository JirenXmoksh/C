#include<stdio.h>
#include<string.h>

typedef struct Pokemon{
        int hp;
        int speed;
        int attack;
        char tier; 
        char name[15];
    }Pokemon;



void change(Pokemon* p){   // In general, (*x).member == x->member
   (*p).hp = 65; 
   // or p->hp = 65;
   p->speed = 110;
   p->attack = 110;
   p->tier = 'S';
   strcpy(p->name,"Raichu");
   return;
}

int main(){
 Pokemon Pikachu = {60,70,100,'A', "Pikachu"};  //Fill the members according to the order written in the parent struct
//  Pikachu.hp = 60;
//  Pikachu.speed = 70;
//  Pikachu.attack = 100;
//  Pikachu.tier = 'A';
//  strcpy(Pikachu.name,"Pikachu");
 
 printf("HP: %d\n", Pikachu.hp);
 printf("Speed: %d\n", Pikachu.speed);
 printf("Attack: %d\n", Pikachu.attack);
 printf("Tier: %c\n", Pikachu.tier);
 printf("Name: %s\n", Pikachu.name);
change(&Pikachu);
printf("HP: %d\n", Pikachu.hp);
 printf("Speed: %d\n", Pikachu.speed);
 printf("Attack: %d\n", Pikachu.attack);
 printf("Tier: %c\n", Pikachu.tier);
 printf("Name: %s\n", Pikachu.name);
    return 0;
}