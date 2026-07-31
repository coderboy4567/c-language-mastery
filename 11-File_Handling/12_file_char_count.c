// Ques: Count total characters, words, and lines present in a text file.
#include<stdio.h>
int main()
{
    FILE *ptr = fopen("sample.txt", "r");
    if(ptr == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char ch;

    while((ch = fgetc(ptr)) != EOF)
    {
        chars++;
        if(ch == '\n') lines++;
        if(ch == ' ' || ch == '\n' || ch == '\t') words++;
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words + 1, lines + 1);
    fclose(ptr);
    return 0;
}