// Ques: Access an array of structures using pointer arithmetic instead of array indices.
#include<stdio.h>
typedef struct box
{
    int weight;
} box;

int main()
{
    box shipments[3] = {{50}, {80}, {120}};
    box* ptr = shipments; // Points to 0th element
    
    printf("Using Pointer Arithmetic:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Box %d weight = %d kg\n", i+1, (ptr + i)->weight);
    }
    return 0;
}