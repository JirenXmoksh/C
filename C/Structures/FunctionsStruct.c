#include<stdio.h>
// Declare the structs outside the main function so that every other function we create has access to the struct
typedef struct Pokemon //Global declaration, i.e: Outside main function
    {
        int hp;
        int speed;
        int attack;
        char tier; 
        char name[];
    }Pokemon;

void fun(Pokemon p){
    printf("%d", p.hp);
    return;
}

void change(Pokemon p){
   p.hp = 65; 
   p.speed = 110;
   p.attack = 110; //This whole thing we made in the name of 'changing' was nothing but pass by value, all the stats of Pikachu were copied and passed onto this function.i.e: Pass by value
   return;
}//Structures are passed by value!!

int main(){
 Pokemon Pikachu;
 Pikachu.hp = 60;
 Pikachu.speed = 100;
 Pikachu.attack = 100;
 change(Pikachu);
 printf("%d\n", Pikachu.hp);
 printf("%d\n", Pikachu.speed);
 printf("%d\n", Pikachu.attack);
fun(Pikachu);

    return 0;
}