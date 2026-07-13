// Ques: Remove all spaces from a given string in-place.
#include<stdio.h>
int main()
{
    char str[100] = "C Language Mastery";
    int i = 0, j = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; // New string termination
    
    printf("String without spaces: %s\n", str);
    return 0;
}