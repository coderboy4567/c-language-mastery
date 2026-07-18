// Ques: Demonstrate structure nesting by nesting structures up to three levels deep.
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char name[20];
    } pokemon;

    typedef struct legendarypokemon
    {
        pokemon normal; // Structure nested inside another
        int extraspeed;
    } legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon legend; // Multi-level structure nesting
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    arceus.legend.extraspeed = 600;
    arceus.legend.normal.attack = 500;

    legendarypokemon mewtwo;
    mewtwo.extraspeed = 500;
    mewtwo.normal.hp = 200;
    mewtwo.normal.attack = 600;
    mewtwo.normal.speed = 300;
    strcpy(mewtwo.normal.name, "mewtwo hero");

    printf("Arceus base attack power: %d\n", arceus.legend.normal.attack);
    
    return 0;
}