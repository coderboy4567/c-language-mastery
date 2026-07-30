// Ques: Create a new file and write text to it using fopen ('w' mode) and fputs.
#include<stdio.h>
int main()
{
    FILE* ptr = fopen("Adnan.txt", "w"); // Creates or overwrites file
    
    if(ptr == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }
    
    char str[] = "software engineer to mai ban ke hi rahunga";
    fputs(str, ptr);
    
    printf("Successfully written to Adnan.txt\n");
    fclose(ptr);
    return 0;
}