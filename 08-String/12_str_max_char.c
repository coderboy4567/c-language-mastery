// Ques: Find the highest frequency (maximum occurring) character in a string.
#include<stdio.h>
int main()
{
    char str[] = "success";
    int freq[256] = {0}; // Frequency array for all ASCII characters
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }
    
    int max = 0;
    char maxChar;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(int)str[i]] > max)
        {
            max = freq[(int)str[i]];
            maxChar = str[i];
        }
    }
    
    printf("Max occurring character is '%c' (appears %d times)\n", maxChar, max);
    return 0;
}