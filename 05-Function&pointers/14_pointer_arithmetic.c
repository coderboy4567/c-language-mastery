// Question: WAP to demonstrate Pointer Arithmetic (how address increments based on data type size).
#include<stdio.h>
int main()
{
    int a = 5;
    int* ptr = &a;
    
    printf("Pointer ka original address: %p\n", ptr);
    
    ptr++; // Incrementing the pointer
    printf("ptr++ karne ke baad address:  %p\n", ptr); 
    // Aap dekhoge ki address direct 4 bytes aage badh gaya kyunki int 4 bytes ka hota hai
    
    return 0;
}