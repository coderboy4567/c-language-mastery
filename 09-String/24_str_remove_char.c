// Ques: Remove all occurrences of a specific character from a string in-place.
#include<stdio.h>
int main()
{
    char str[] = "programming";
    char ch = 'r'; // Is character ko hatana hai
    int j = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // New string boundary line set ki
    
    printf("String after removing '%c': %s\n", ch, str);
    return 0;
}