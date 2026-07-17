// Ques: Create a structure 'person' to store and print multiple employees' details.
#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[50];
        int salary;
        int age;
    } adnan, kasid;
    
    adnan.age = 18;
    strcpy(adnan.name, "adnan sami");
    adnan.salary = 90000;

    kasid.age = 18;
    strcpy(kasid.name, "kasid irfan");
    kasid.salary = 80000;

    printf("First person name : %s\n", adnan.name);
    printf("Second person age : %d\n", kasid.age);
    
    return 0;
}