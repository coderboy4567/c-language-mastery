// Ques: Remove all duplicate characters from a string, keeping only unique ones.
#include<stdio.h>
int main()
{
    char str[] = "programming";
    int freq[256] = {0};
    int j = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(int)str[i]] == 0)
        {
            freq[(int)str[i]] = 1; // Mark as seen
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    
    printf("String after removing duplicates: %s\n", str);
    return 0;
}