// Question: WAP to create a basic function named 'greet' and call it multiple times from main.
#include<stdio.h>
void greet()
{
    printf("Good Morning\n"); 
    printf("How are You ?\n");
    return;
}
int main()
{
    greet();  // Function Call 1
    greet();  // Function Call 2
    greet();  // Function Call 3
    greet();  // Function Call 4
    return 0;
}