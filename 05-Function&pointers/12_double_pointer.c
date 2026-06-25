// Question: WAP to demonstrate a pointer to a pointer (Double Pointer) and print values/addresses.
#include<stdio.h>
int main()
{
    int a = 25; 
    int* x = &a;   // Single pointer: stores address of a
    int** y = &x;  // Double pointer: stores address of pointer x
    
    // Values print karne ke liye (%d)
    printf("Values using variables:\n");
    printf("a ki value: %d\n", a);
    printf("*x ki value: %d\n", *x);  
    printf("**y ki value: %d\n\n", **y);
    
    // Addresses print karne ke liye (%p)
    printf("Addresses using %%p:\n");
    printf("a ka address (&a): %p\n", &a);
    printf("x mein jama address: %p\n", x);
    printf("x ka apna address (&x): %p\n", &x);
    printf("y mein jama address: %p\n", y);
    
    return 0;
}