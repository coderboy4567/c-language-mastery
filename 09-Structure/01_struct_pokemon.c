// Ques: Create a basic structure 'pokemon' and take input for its attributes.
#include<stdio.h>
int main()
{
    struct pokemon  // User-defined data type
    {
        int hp;
        int attack;
        int speed;
        char tier;    // S, A, B, C, D
    };
    
    struct pokemon pikachu;
    printf("Enter attack of pikachu : ");
    scanf("%d", &pikachu.attack);
    pikachu.hp = 60;
    pikachu.speed = 120;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 70;
    charizard.speed = 140;
    charizard.tier = 'B';

    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier = 'S';

    printf("Pikachu attack power: %d\n", pikachu.attack);
    return 0;
}