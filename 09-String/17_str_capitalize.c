// Ques: Capitalize the first letter of every word in a sentence.
#include<stdio.h>
int main()
{
    char str[] = "pursuing bachelor of computer applications";
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        // Capitalize first character or any character after a space
        if(i == 0 || str[i-1] == ' ')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }
    
    printf("Capitalized Title: %s\n", str);
    return 0;
}