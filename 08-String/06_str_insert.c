// Ques: Insert a character 'x' at index 2 of a string by shifting the remaining elements.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[15] = "Adnan";
    printf("Original: %s\n", str);
    
    // Shifting elements to the right to make space at index 2
    for(int i = 6; i >= 2; i--)
    {
        str[i+1] = str[i];
    }
    str[2] = 'x'; 
    
    printf("After Insertion: %s\n", str);
    return 0;
}