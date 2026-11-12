// Ques: Demonstrate NULL pointer declaration and printing its memory address.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x = 9;
    int* ptr = NULL; // Initializing pointer with NULL
    
    printf("Address stored in NULL pointer: %p\n", ptr);
    return 0;
}