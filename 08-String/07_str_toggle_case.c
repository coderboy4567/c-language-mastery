// Ques: Toggle the case of each character in a string (Uppercase to Lowercase & vice versa).
#include<stdio.h>
int main()
{
    char str[] = "Gaya Bihar";
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; // Convert to lowercase
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // Convert to uppercase
    }
    
    printf("Toggled String: %s\n", str);
    return 0;
}