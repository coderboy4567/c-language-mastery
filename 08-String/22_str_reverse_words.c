// Ques: Reverse each individual word in a given sentence in-place.
// Example: "hello world" -> "olleh dlrow"
#include<stdio.h>
void reverseSection(char str[], int start, int end)
{
    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[] = "hello world";
    int start = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        // Jaise hi space mile, usse pehle wale word ko reverse kar do
        if(str[i] == ' ')
        {
            reverseSection(str, start, i - 1);
            start = i + 1; // Agle word ka starting index
        }
        // Aakhri word ke liye check
        else if(str[i+1] == '\0')
        {
            reverseSection(str, start, i);
        }
    }
    
    printf("Sentence after reversing individual words: %s\n", str);
    return 0;
}