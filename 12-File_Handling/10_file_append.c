// Ques: Append new text content to an existing file without overwriting using 'a' mode.
#include<stdio.h>
int main()
{
    FILE* ptr = fopen("Adnan.txt", "a"); // Append mode: preserves old data
    
    if(ptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    char str[] = "\nDaily coding streak push complete!";
    fputs(str, ptr);
    
    printf("Successfully appended text to file.\n");
    fclose(ptr);
    return 0;
}