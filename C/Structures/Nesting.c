#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct Poke{
       int hp;
       int speed;
       int attack;
       char tier;
       char name[15];
    }Poke;

typedef struct LegendaryPokemon{
       Poke regular;         //We included all the previous members in this.
       char ability[15];
    }LegendaryPokemon;

typedef struct GodPoke{
       LegendaryPokemon legend;          // In  general, if we want to make another struct which has all the members from some other struct
                                         // plus some additional members, just nest the existing struct (give it a name) in our special struct.
       int specialAttack;
    }GodPoke;
int main(){
   
//If we want to include all these members to another struct having some 
//additional member including these, then we use nesting!

LegendaryPokemon mewtwo;  // Single nesting
strcpy(mewtwo.ability,"Psychic Control");
mewtwo.regular.hp = 300;
mewtwo.regular.attack = 200;
mewtwo.regular.speed = 250;
strcpy(mewtwo.regular.name,"Mewtwo");
mewtwo.regular.tier = 'S';
     
GodPoke arceus; //Double Nesting
arceus.specialAttack = 300;
strcpy(arceus.legend.ability,"TurnsIntoStone");
arceus.legend.regular.hp = 400;
arceus.legend.regular.attack = 500;
arceus.legend.regular.speed = 400;
arceus.legend.regular.tier = 'S';
strcpy(arceus.legend.regular.name,"Arceus");
    
    return 0;
}
