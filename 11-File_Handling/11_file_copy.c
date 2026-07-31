// Ques: Copy content from one text file to another using fgetc and fputc.
#include<stdio.h>
int main()
{
    FILE *source = fopen("input.txt", "r");
    FILE *target = fopen("output.txt", "w");

    if(source == NULL || target == NULL)
    {
        printf("Error opening files!\n");
        return 1;
    }

    char ch;
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully!\n");
    fclose(source);
    fclose(target);
    return 0;
}