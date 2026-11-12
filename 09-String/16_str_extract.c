// Ques: Extract a substring from a string given a start index and length.
#include<stdio.h>
int main()
{
    char source[] = "Programming";
    char target[20];
    int start = 3, len = 4; // Expected output: "gram"
    
    int i;
    for(i = 0; i < len && source[start + i] != '\0'; i++)
    {
        target[i] = source[start + i];
    }
    target[i] = '\0';
    
    printf("Extracted Substring: %s\n", target);
    return 0;
}