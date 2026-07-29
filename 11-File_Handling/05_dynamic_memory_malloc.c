// Ques: Allocate dynamic memory using malloc function and demonstrate dynamic pointer access.
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    int* ptr = (int*) malloc(10*4);
    ptr++;
    printf("%d",*ptr);
    return 0;
}