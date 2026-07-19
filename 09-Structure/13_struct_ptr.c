// Ques: Use structure pointers and the arrow operator (->) to modify structure attributes inside a function.
#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier; 
    char name[20];
} pokemon;

void change(pokemon* p)
{
    // Modifying values directly at the original memory location using pointer
    p->hp = 70;
    p->attack = 80;
    p->speed = 120;
    p->tier = 'S';
    strcpy(p->name, "mewtwo");
}

int main()
{
    // Order-wise inline initialization shortcut
    pokemon pikachu = {60, 70, 100, 'A', "pikachu"};

    printf("--- Original Values ---\n");
    printf("HP: %d, Attack: %d, Speed: %d, Tier: %c, Name: %s\n", 
            pikachu.hp, pikachu.attack, pikachu.speed, pikachu.tier, pikachu.name);
    
    change(&pikachu); // Passing address (Pass by Reference simulation)

    printf("\n--- Values After Pointer Change ---\n");
    printf("HP: %d, Attack: %d, Speed: %d, Tier: %c, Name: %s\n", 
            pikachu.hp, pikachu.attack, pikachu.speed, pikachu.tier, pikachu.name);
            
    return 0;
}