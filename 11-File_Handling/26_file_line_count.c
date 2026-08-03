// Ques: Write a C program to count the total number of lines in a text file.
#include<stdio.h>

int main()
{
    FILE *ptr = fopen("sample.txt", "r");
    if(ptr == NULL)
    {
        printf("Error: File 'sample.txt' not found!\n");
        return 1;
    }

    int lines = 0;
    char ch;

    while((ch = fgetc(ptr)) != EOF)
    {
        if(ch == '\n')
        {
            lines++;
        }
    }

    printf("Total lines in the file: %d\n", lines + 1);

    fclose(ptr);
    return 0;
}