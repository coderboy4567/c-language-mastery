// Question: WAP to demonstrate the basic syntax of pointers, storing and printing addresses.
#include <stdio.h>
int main() {
    int x = 10;      // Normal variable
    int* ptr;        // Pointer variable (int ke aage * lagaya)

    ptr = &x;        // x ka address ptr mein daal diya

    printf("x ki value: %d\n", x);          
    printf("x ka address (&x): %p\n", &x);       
    printf("ptr mein kya address hai: %p\n", ptr);   
    printf("ptr kiski value dikha raha hai (*ptr): %d\n", *ptr); 

    return 0;
}