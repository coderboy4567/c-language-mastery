// Ques: Read a text file and convert all lower-case characters to upper-case in a new file.
#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *src = fopen("lowercase.txt", "r");
    FILE *dest = fopen("UPPERCASE.TXT", "w");

    if(src == NULL || dest == NULL) return 1;

    char ch;
    while((ch = fgetc(src)) != EOF)
    {
        fputc(toupper(ch), dest);
    }

    printf("File converted to UPPERCASE successfully!\n");

    fclose(src);
    fclose(dest);
    return 0;
}