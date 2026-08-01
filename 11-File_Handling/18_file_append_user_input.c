// Ques: Take multiple lines of input from user and append them to a file until "EXIT".
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr = fopen("journal.txt", "a");
    if(ptr == NULL) return 1;

    char line[100];
    printf("Enter text to write (Type 'EXIT' on a new line to stop):\n");

    while(1)
    {
        fgets(line, sizeof(line), stdin);
        if(strncmp(line, "EXIT", 4) == 0) break;
        fputs(line, ptr);
    }

    printf("Journal saved!\n");
    fclose(ptr);
    return 0;
}