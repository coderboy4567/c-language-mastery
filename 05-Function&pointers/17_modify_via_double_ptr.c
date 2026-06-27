// Question: WAP to modify a variable's value indirectly using a Double Pointer (Pointer to Pointer).
#include<stdio.h>
void changeValue(int** doublePtr)
{
    **doublePtr = 500; // Directly changing the main variable's value
}
int main()
{
    int num = 100;
    int* ptr = &num;
    
    printf("Original Value: %d\n", num);
    
    changeValue(&ptr); // Passing address of the pointer
    
    printf("Modified Value via Double Pointer: %d\n", num);
    return 0;
}