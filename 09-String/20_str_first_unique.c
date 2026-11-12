// Ques: Find the first non-repeating (unique) character in a string.
#include<stdio.h>
int main()
{
    char str[] = "racecar";
    int freq[256] = {0};
    
    for(int i = 0; str[i] != '\0'; i++) freq[(int)str[i]]++;
    
    char result = '\0';
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(int)str[i]] == 1)
        {
            result = str[i];
            break;
        }
    }
    
    if(result != '\0') printf("First non-repeating character is: %c\n", result);
    else printf("All characters are repeating.\n");
    return 0;
}