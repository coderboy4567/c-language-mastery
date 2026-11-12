// Ques: Take a full sentence as input from the user using scanf with regex and print it.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter your words: ");
    
    // Reads the entire line including spaces until a newline character is pressed
    scanf("%[^\n]s", str);
    
    printf("Your input was: %s\n", str);
    return 0;
}