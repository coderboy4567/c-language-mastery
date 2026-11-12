// Ques: Demonstrate deep copying of a structure variable into another using assignment operator.
#include<stdio.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier; 
    } pokemon;
    
    pokemon a, b;

    a.hp = 100;
    a.attack = 120;
    a.speed = 50;
    a.tier = 'A'; 

    b = a; // Deep Copying all data fields at once
    
    printf("Copied Pokemon HP: %d\n", b.hp);
    return 0;
}