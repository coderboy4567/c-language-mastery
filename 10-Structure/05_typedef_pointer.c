// Ques: Use typedef to fix the multiple pointer declaration issue in a single line.
#include<stdio.h>
typedef int* pointer; // Defining 'pointer' as a type for int*
int main()
{
    int x = 5, y = 7;
    
    // Now both 'a' and 'b' will correctly become pointer variables
    pointer a = &x, b = &y; 
    
    printf("Address stored in a: %p\n", a);
    printf("Address stored in b: %p\n", b);
    return 0;
}