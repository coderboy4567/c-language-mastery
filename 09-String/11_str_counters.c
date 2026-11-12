// Ques: Count the total number of alphabets, digits, and special characters in a string.
#include<stdio.h>
int main()
{
    char str[100] = "Adnan123@gmail.com";
    int alphabets = 0, digits = 0, special = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            special++;
    }
    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);
    return 0;
}