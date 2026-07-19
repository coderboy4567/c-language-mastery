// Ques: Access and modify 'person' structure variables (age and weight) using a pointer function.
#include<stdio.h>
typedef struct person
{
    int age;
    int weight;
} person;

void change(person* p)
{
    p->age = 25;
    p->weight = 50;   
}

int main()
{
    person p;
    p.age = 16;
    p.weight = 45;
    
    printf("Original Data -> Age: %d, Weight: %d\n", p.age, p.weight);

    change(&p);

    printf("Modified Data -> Age: %d, Weight: %d\n", p.age, p.weight);
    return 0;
}