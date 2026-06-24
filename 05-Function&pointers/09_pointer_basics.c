// Question: WAP to demonstrate pointer basics by printing the address and value of a variable using '&' and '*' operators.
#include<stdio.h>
int main()
{
    int age = 20;
    int* ptr = &age; // ptr stores the address of age
    
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Value stored in ptr (Address of age): %p\n", ptr);
    printf("Value at address stored in ptr (*ptr): %d\n", *ptr);
    
    return 0;
}