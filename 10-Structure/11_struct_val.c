// Ques: Demonstrate that structures are passed by value to functions by default (changes don't affect main).
#include<stdio.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char name[20];
} pokemon;

void change(pokemon p)
{
    p.hp = 70;
    p.attack = 60;
    p.speed = 110;
    return;
}

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    
    change(pikachu); // Passing by value
    
    // Original values will remain unchanged
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Speed: %d\n", pikachu.speed);
    
    return 0; 
}