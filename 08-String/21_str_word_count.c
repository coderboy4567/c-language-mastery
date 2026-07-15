// Ques: Count the total number of words in a given sentence safely.
#include<stdio.h>
int main()
{
    char str[] = "Bachelor of Computer Applications";
    int words = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        // Agar current char space nahi hai aur agla char space ya null hai, toh word complete hua
        if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
        {
            words++;
        }
    }
    
    printf("Total words in the sentence: %d\n", words);
    return 0;
}