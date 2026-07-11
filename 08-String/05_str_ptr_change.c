// Ques: Demonstrate how to reassign a whole string literal to a character pointer.
#include<stdio.h>
#include<string.h>
int main()
{
    char* ptr = "MdAdnanSami";
    
    // Changing the pointer to point to a new string literal location
    ptr = "sami"; 
    
    printf("Updated pointer string: %s\n", ptr);
    return 0;
}