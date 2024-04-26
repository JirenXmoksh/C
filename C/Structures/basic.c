// A structure unlike an Array can be used to store different data types
// Incase of same datatype, we use an Array.
#include<stdio.h>
int main(){
    struct Pokemon //A 'User defined' dataype is made
    {
        int hp;
        int speed;
        int attack;
        char tier; // S, A, B, C, D
    }/*Pikachu, Charizard*/; //Further variable can be declared like this also
  struct Pokemon Pikachu;  // A big box is made with the name Pikachu with 4 sub units
  Pikachu.attack = 60;
  Pikachu.hp = 50;
  Pikachu.speed = 100;
  Pikachu.tier = 'A';

  struct Pokemon Charizard; // A big box named Charizard is made with 4 sub units
  Charizard.attack = 130;
  Charizard.hp = 200;
  Charizard.speed = 50;
  Charizard.tier = 'S';
  printf("%d", Pikachu.attack );
    return 0;
}